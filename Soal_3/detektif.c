#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <pwd.h>

int main() {
    char path[100];
    printf("Masukkan path: ");
    scanf("%s", path);

    DIR *dir = opendir(path);

    if (dir == NULL) {
        perror("Gagal membuka direktori");
        return 1;
    }

    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {
        struct stat info;
        char fullpath[512];

        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);

        if (stat(fullpath, &info) == 0) {

            if (S_ISREG(info.st_mode) && (info.st_mode & S_IXUSR)) {
                struct passwd *pw = getpwuid(info.st_uid);

                printf("[+] Suspect Executable Ditemukan: %s | Milik Owner: %s\n",
                       entry->d_name,
                       pw->pw_name);
            }
        }
    }

    closedir(dir);
    return 0;
}

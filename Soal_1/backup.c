#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid == 0) {
        char *args[] = {"mkdir", "backup_terbaru", NULL};
        execv("/bin/mkdir", args);
    } else {
        wait(NULL);

        pid_t pid2 = fork();

        if (pid2 == 0) {
            char *args[] = {"cp", "-r", "data_rahasia.txt", "backup_terbaru/", NULL};
            execv("/bin/cp", args);
        } else {
            wait(NULL);
            printf("Backup selesai! PID Parent: %d\n", getpid());
        }
    }

    return 0;
}

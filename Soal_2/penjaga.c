#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        exit(0);
    }

    umask(0);
    setsid();
    chdir("/");

    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    while (1) {
        sleep(30);

        FILE *fp = fopen("/home/bilaeev/laporan.txt", "a");

        if (fp != NULL) {
            fprintf(fp, "Log aman! Cek dilakukan oleh Daemon dengan PID: %d\n", getpid());
            fclose(fp);
        }
    }
}

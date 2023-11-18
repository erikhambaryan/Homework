#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int main() {
    pid_t pid = fork();

    if (pid == -1) {

        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) {

        sleep(2);
        printf("THE KID TRIED TO MURDER HER MOM\n");


        if (kill(getppid(), SIGKILL) == 0) {
            printf("THE PARRENT WAS SUCCESFULLY MURDERED\n");
        } else {
            printf("THEAT &*#@ GOT AWEY THIS TIME\n");
        }
    } else {

        printf("PARETAL RESERECTION\n");
        sleep(5);

        printf("PARENTAL DEEP SLEEP\n");
    }

    return 0;
}

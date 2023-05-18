#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

//if pid is 0, this is the child process, not parent
//else this is the parent process
//but what about for grandparent??

int main() {
    pid_t child_pid, grandchild_pid;

    // Create the child process
    child_pid = fork();

    if (child_pid == 0) {
        // Child process
        printf("I am the child (%d)\n", getpid());

        // Create the grandchild process
        grandchild_pid = fork();

        if (grandchild_pid == 0) {
            // Grandchild process
            printf("I am the grandchild (%d)\n", getpid());
        }

    } else {
        // Parent process
        wait(NULL);
        printf("I am the parent (%d)\n", getpid());
    }

    return 0;
}

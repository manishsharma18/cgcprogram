//Write a program that creates n child processes using fork, where n is provided as a command-line argument. Each child process should print its process ID (PID) and its parent's PID. The parent process should wait for all children to complete before printing "All children have terminated." in c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number_of_children>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]); // Convert command-line argument to integer
    if (n <= 0) {
        fprintf(stderr, "Number of children must be a positive integer.\n");
        return 1;
    }

    pid_t pid;
    int i;

    for (i = 0; i < n; ++i) {
        pid = fork();

        if (pid < 0) {
            fprintf(stderr, "Fork failed.\n");
            return 1;
        } else if (pid == 0) {
            // Child process
            printf("Child process PID: %d, Parent PID: %d\n", getpid(), getppid());
            return 0; // Child process terminates after printing
        }
        // Parent process continues to create more children
    }

    // Parent process waits for all children to complete
    for (i = 0; i < n; ++i) {
        wait(NULL);
    }

    printf("All children have terminated.\n");

    return 0;
}


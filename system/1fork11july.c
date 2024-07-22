//1. Write a program that uses fork to create a child process. The child process should print "Hello from child!" and the parent process should print "Hello from parent!".
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed.\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Hello from child!\n");
    } else {
        // Parent process
        printf("Hello from parent!\n");
    }

    return 0;
}


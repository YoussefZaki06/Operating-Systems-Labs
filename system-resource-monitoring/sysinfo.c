#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * System Information Collector
 * Developed by: Youssef Walid Elsayed Zaki | 2401245448
 */

int main() {
    pid_t pid;

    // --- CHILD 1: KERNEL VERSION ---
    printf("\n=== KERNEL VERSION ===\n");
    pid = fork(); // Spawn 1st child
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        // Child 1: Replaces itself with 'uname' command
        char *args[] = {"uname", "-a", NULL};
        if (execvp(args[0], args) == -1) {
            perror("Exec failed");
            exit(1);
        }
    } else {
        // Parent: Waits for Child 1 to finish before moving to next header
        waitpid(pid, NULL, 0);
    }

    // --- CHILD 2: SYSTEM UPTIME ---
    printf("\n=== SYSTEM UPTIME ===\n");
    pid = fork(); // Spawn 2nd child
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        // Child 2: Replaces itself with 'uptime' command
        char *args[] = {"uptime", NULL};
        if (execvp(args[0], args) == -1) {
            perror("Exec failed");
            exit(1);
        }
    } else {
        waitpid(pid, NULL, 0);
    }

    // --- CHILD 3: DISK USAGE ---
    printf("\n=== DISK USAGE ===\n");
    pid = fork(); // Spawn 3rd child
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        // Child 3: Replaces itself with 'df' command
        char *args[] = {"df", "-h", NULL};
        if (execvp(args[0], args) == -1) {
            perror("Exec failed");
            exit(1);
        }
    } else {
        waitpid(pid, NULL, 0);
    }

    // --- CHILD 4: MEMORY USAGE ---
    printf("\n=== MEMORY USAGE ===\n");
    pid = fork(); // Spawn 4th child
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        // Child 4: Replaces itself with 'free' command
        char *args[] = {"free", "-h", NULL};
        if (execvp(args[0], args) == -1) {
            perror("Exec failed");
            exit(1);
        }
    } else {
        waitpid(pid, NULL, 0);
    }

    // Final completion message as per requirement #5
    printf("\nSystem snapshot completed successfully.\n");

    return 0;
}

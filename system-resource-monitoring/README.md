# OS Assignment 2: System Info Collector

**Student Name:** Youssef Walid Elsayed Zaki  
**Student ID:** 2401245448

## Description
This program demonstrates process management in Linux using the `fork-exec-wait` model. It spawns four distinct child processes to execute system commands (`uname`, `uptime`, `df`, and `free`) and uses `waitpid()` to ensure the parent process synchronizes the output correctly.

## Instructions
1. Run `make` to compile the source code using the provided Makefile.
2. Execute the program by typing `./sysinfo`.
3. Use `make clean` to remove the binary file.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[]){
	if (argc < 3){
		printf("Usage: %s <Name> <ID>\n", argv[0]);
		return 1;
	}

	pid_t pid = fork();

	if (pid < 0){
		perror("Fork Failed");
		return 1;
	}
	else if (pid == 0){
		printf("Running task script for student ID %s...\n", argv[2]);

		execlp("./task_2401245448.sh", "./task-2401245448.sh", argv[1], argv[2], NULL);

		perror("Exec Failed");
		exit(1);
	}
	else{
		wait(NULL);
		printf("Task completed successfully\n");
	}

	return 0;
}



//process.c

/*********************************************************************************
* Process Management Server: Process
* Author: Michael Hartung
* Date: 2/12/2015
* Description: This process is spawned from the Child server and waits for 100
* seconds and if not killed before reaching the end will signal the server to spawn
* a copy a new process to take it's place.
*********************************************************************************/

#include "process.h"

int main()
{
	signal(SIGINT, sigIntHandler);
	printf("Process %d started!\n", getpid());
	sleep(100);
	printf("Reached the end of process %d...\n", getpid());
	kill(getppid(), SIGUSR1);
	return 0;
}


// Handles kill command from Child Server
void sigIntHandler(int sigNum)
{
	printf("Process %d terminating...\n", getpid());
	exit(0);
}
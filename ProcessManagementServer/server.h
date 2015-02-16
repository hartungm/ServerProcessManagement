// server.h

#include <stdio.h> 
#include <errno.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>

#define MAX_PROCESSES 10

void sigIntHandler(int sigNum);
void sigUSR1Handler(int sigNum);
void sigUSR2Handler(int sigNum);
void createProcess();
void abortProcess();
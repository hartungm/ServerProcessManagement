// mainServer.h

#include <stdio.h> 
#include <errno.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <string.h>
#include <signal.h>

#define MAX_SERVERS 10
#define STRING_SIZE 50

typedef struct {
	pid_t serverPid;
	char* serverName;
} processStruct;

struct processStruct {
	pid_t serverPid;
	char* serverName;
};

int main();
void sigIntHandler(int sigNum);
void createServer(char* minProcs, char* maxProcs, char* serverName);
void abortServer(char* serverName);
void displayStatus();
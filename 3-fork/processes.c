#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
int status;
int pid = fork();
// Write C code here

//if pid is 0, this is the child process, not parent
//else this is the parent process
//but what about for grandparent??
printf("I am the grandchild %d"\n)
printf("I am the child %d"\n)
return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main(){
    int pid;
    int status;
    pid = fork();
    if(pid<=-1){
        perror("Bad Fork");
        exit(0);
    }
    if(pid==0){
        printf("I am the child process\n", getpid());
    }
    else{
        printf("I am the parent process\n", getppid());
    }
    return 0;
}
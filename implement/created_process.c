#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "created_process.h"

int created_process_fork(char **buffer_commands){
    pid_t process = fork();

    // char *args[] = {"-las", "-l", "-a", "--help"};

    if (process < 0)
    {
        printf("[Error] Ocorreu algum problema na criação do fork!");
        exit(1);
    }else if(process == 0){
        execvp(buffer_commands[0], buffer_commands);
    }else if(process > 0){
        wait(NULL);
    }
    


    //execvp(buffer_commands[0], buffer_commands);
}
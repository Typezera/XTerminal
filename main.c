#include <stdio.h>
#include "user_keywords.h"
#include <unistd.h>
#include <sys/types.h>


int main()
{
    // printf("Welcome to XTerminal, please, insert commands you want\n");

    while (1)
    {
        printf(">");// captura os comando do usuário
        commands_keyword_user();
    }
    // pid_t x = fork();

    // if (x == 0)//processo filho
    // {
    //     printf("Olá eu sou o processo filho, meu PID é: %d\n, e o PID do meu pai é: %d\n", getpid(), getppid());
    // }else if (x > 0)//processo pai
    // {
    //     printf("Olá eu sou o processo pai e o meu filho é %d\n", x);
    // }

    return 0;
}

#include <stdio.h>
#include "user_keywords.h"


int main()
{
    printf("Welcome to XTerminal, please, insert commands you want\n");


    while (1)
    {
        commands_keyword_user();
    }
    
    return 0;
}

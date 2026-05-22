#include <stdio.h>
#include "user_keywords.h"
#include <unistd.h>
#include <sys/types.h>

int main()
{

    while (1)
    {
        printf(">");
        commands_keyword_user(&argc, argv);
    }

    return 0;
}

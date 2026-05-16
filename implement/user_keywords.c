#include "user_keywords.h"
#include <stdio.h>
#include <string.h>

int commands_keyword_user(){
   char buffer_commands_user[100];

   printf(">");// captura os comando do usuário
   fgets(buffer_commands_user, sizeof(buffer_commands_user), stdin);

   buffer_commands_user[strcspn(buffer_commands_user, "\n")] = '\0';

   char *command = strtok(buffer_commands_user, " ");

   printf("%s", buffer_commands_user);


   printf("%c", *command);
}
#include "user_keywords.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int commands_keyword_user(){
   char buffer_keywords_user[100];
   char *buffer_commands[10];
   int i = 0;

   printf(">");// captura os comando do usuário
   fgets(buffer_keywords_user, sizeof(buffer_keywords_user), stdin);

   buffer_keywords_user[strcspn(buffer_keywords_user, "\n")] = '\0';

   char *command = strtok(buffer_keywords_user, " ");

   printf("%s\n", buffer_keywords_user);

   while (command != NULL)
   {
      buffer_commands[i++] = command;
      command = strtok(NULL, " ");
   }

   buffer_commands[i] = NULL;

   execvp(buffer_commands[0], buffer_commands);
}
#include "user_keywords.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "created_process.h"

int commands_keyword_user()
{
   char buffer_keywords_user[100];
   char *buffer_commands[100];
   int i = 0;

   fgets(buffer_keywords_user, sizeof(buffer_keywords_user), stdin);

   buffer_keywords_user[strcspn(buffer_keywords_user, "\n")] = '\0';

   char *command = strtok(buffer_keywords_user, " ");
   char *first_command = command;
   char *arg = strtok(NULL, " ");

   printf("%s\n", buffer_keywords_user);

   // pid_t pid = fork();

   while (command != NULL)
   {
      buffer_commands[i++] = command;
      command = strtok(NULL, " ");
   }

   buffer_commands[i] = NULL;

   if (first_command != NULL && strcmp(first_command, "cd") == 0)
   {
      if (arg == NULL)
      {
         printf("cd: caminho não informado!");
      }
      else
      {
         if (chdir(arg) != 0)
         {
            perror("cd");
         }
      }
   }
   else
   {
      created_process_fork(buffer_commands);
   }
}
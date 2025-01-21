#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include "Options.h"
#include "Templates.h"
#include "ProgSet.h"

int _help() {
  printf(" --- Quick Setup Help --- \n\n");
  printf("USAGE: qset [OPTION] [TYPE] [ARGS]\n");
  printf("   or: qset [OPTION]\n");
  printf("Quickly setup folder/file structure in the current directory.\n\n");
  printf("OPTIONS:\n");
  printf("   -h, --help                  Help function to display usage and options/arguments.\n");
  printf("   -v, --version               Display version and developer information.\n");
  printf("   -c, --create                Create the desired folder/directory setup specified with arguments.\n");
  printf("TYPES:\n");
  printf("   c                           Suited to C programming language.\n");
  return 0;
}

int _version()  {
  printf("Quick Setup " GREEN VERSION RESET "\n");
  printf("Developed and managed by Samuel Clerke (samuelclerke).\n");
  printf("Website: samjclerke.com\n");
  printf("\nThis is a free open-source software.\nFeel free to modify and redistribute your own version.\n");
  printf(RED "NO WARRANTY" RESET " provided for this software.\n");

  return 0;
}

int _create(int numCmd, char **cmd) {
  if (strcmp(cmd[2], "c") == 0) {
    t_cLanguage(&numCmd, cmd);
  } else if (strcmp(cmd[2], "c++") == 0 || strcmp(cmd[2], "cpp") == 0) {
    //t_cpp(arg);
  } else if (strcmp(cmd[2], "web") == 0) {
    //t_web(arg);
  }
}
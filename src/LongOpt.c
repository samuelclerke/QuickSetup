#include <stdio.h>
#include "LongOpt.h"
#include "ProgSet.h"

// Main Help Function. Used to guide user. [LONG OPTION]
int lOpt_help(char **arg) {
  printf(" --- Quick Setup Help --- \n");

  return 0;
}

// Main Version Function. Used to find application version. [LONG OPTION]
int lOpt_version(char **arg)  {
  printf("Quick Setup " GREEN VERSION RESET "\n");
  printf("Developed and managed by Samuel Clerke (samuelclerke).\n");
  printf("Website: samjclerke.com\n");
  printf("\nThis is a free open-source software.\nFeel free to modify and redistribute your own version.\n");
  printf(RED "NO WARRANTY" RESET " provided for this software.\n");

  return 0;
}
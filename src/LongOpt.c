#include <stdio.h>
#include "LongOpt.h"
#include "ProgSet.h"

// Main Help Function. Used to guide user. [LONG OPTION]
int lOpt_help(char **arg) {
  printf("Quick Setup " GREEN VERSION RESET "\n");

  return 0;
}

// Main Version Function. Used to find application version. [LONG OPTION]
int lOpt_version(char **arg)  {
  printf("Quick Setup " GREEN VERSION RESET "\n");

  return 0;
}
#include <stdio.h>
#include <string.h>
#include "ProgSet.h"
#include "Options.h"

#include "Options.c"
#include "Templates.c"

int main(int argc, char **argv) {

  if (argc == 1) {
    printf("Welcome to Quick Setup (QSET).\n");
    printf("For help, run \"" YELLOW "qset --help" RESET "\".\n");
    return 0;
  } else if (argc > 4) {
    printf(RED "ERROR:" RESET " TOO MANY ARGUMENTS.\n");
    return 0;
  }

  if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
    _help(argc, argv);

  } else if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0) {
    _version(argv);

  } else if (strcmp(argv[1], "--create") == 0 || strcmp(argv[1], "-c") == 0) {
    _create(argc, argv);
  } else {
    printf(RED "ERROR:" RESET " Invalid argument/s.\n");
    printf("For help, run \"" YELLOW "qset --help" RESET "\".\n");
  }

  return 0;
}
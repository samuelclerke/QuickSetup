#include <stdio.h>
#include "ProgSet.h"
#include "LongOpt.h"
#include "string.h"

int main(int argc, char **argv) {

  if (argc == 1) {
    printf("Welcome to Quick Setup (QSET).\n");
    printf("For help, run \"" YELLOW "qset --help" RESET "\".\n");
    return 0;
  } else if (argc > 3) {
    printf(RED "ERROR:" RESET " TOO MANY ARGUMENTS.\n");
    return 0;
  }

  if (strcmp(argv[1], "--help") == 0) {
    lOpt_help(argv);

  } else if (strcmp(argv[1], "--version") == 0) {
    lOpt_version(argv);

  } else if (strcmp(argv[1], "c") == 0) {
    t_cLanguage(argv);
    
  } else if (strcmp(argv[1], "web") == 0) {
    //t_web(argv);
    
  } else if (strcmp(argv[1], "java") == 0) {
    //t_java(argv);

  } else {
    printf(RED "ERROR:" RESET " Invalid argument/s.\n");
    printf("For help, run \"" YELLOW "qset --help" RESET "\".\n");
  }

  return 0;
}
#include <stdio.h>
#include <sys/stat.h>
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

int t_cLanguage(char **arg) {
  FILE *fptr;

  mkdir("build", 0777);
  mkdir("docs", 0777);
  mkdir("include", 0777);
  mkdir("src", 0777);

  fptr = fopen("src/main.c", "w");
  if (!fptr) {
    perror("Error creating src/main.c.");
    return 1;
  }
  fprintf(fptr, "#include <stdio.h>\n\nint main(int argc, int *argv[]) {\n  printf(\"Hello, World!\\n\");\n  return 0;\n}");
  fclose(fptr);

  fptr = fopen("Makefile", "w");
  if (!fptr) {
    perror("Error creating Makefile.");
    return 1;
  }
  fclose(fptr);

  return 0;
}
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include "Templates.h"


int t_cLanguage(int numCmd, char **arg) {
  if (strcmp(arg[3], "default") == 0 || strcmp(arg[3], "d") == 0 || strcmp(arg[3], "") == 0) {
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
  } else {

  }
}
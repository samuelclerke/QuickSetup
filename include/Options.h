#ifndef OPTIONS_H
#define OPTIONS_H

// [OPTION]
// Main Help Function. Used to guide user through application processes.
// INPUT: int, char double ptr, OUTPUT: int w/ success == 0.
int _help();
// [OPTION]
// Main Version Function. Used to find application version.
// INPUT: int, char double ptr, OUTPUT: int w/ success == 0.
int _version();
// [OPTION]
// Main Create Function. Used to create filesystem structure.
// INPUT: int, char double ptr, OUTPUT: int w/ success == 0.
int _create(int numCmd, char **cmd);

#endif
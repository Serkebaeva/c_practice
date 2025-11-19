#ifndef C_PROGR_LANG_EXERCISES_HEADERS_H
#define C_PROGR_LANG_EXERCISES_HEADERS_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX_LINE 1024 /* MAX input line length */

/* shared function prototypes */
int strindex(const char s[], const char t[]);
int custom_getline(char s[], int lim);
int find_matching_pattern(const char pattern[]);

#endif /* C_PROGR_LANG_EXERCISES_HEADERS_H */
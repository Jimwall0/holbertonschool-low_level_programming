#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>

unsigned int _strlen(char *c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
#endif

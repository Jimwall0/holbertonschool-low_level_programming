#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
#endif

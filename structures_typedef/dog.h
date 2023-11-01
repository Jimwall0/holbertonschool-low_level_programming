#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
/**
 * struct dog - struct woth name, age, owner
 * @name: a name for dog
 * @age: how old is the dog
 * @owner: who owns the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

char *_strcpy(char *s, char *array2);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

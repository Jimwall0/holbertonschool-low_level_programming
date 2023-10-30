#ifndef DOG_H
#define DOG_H
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

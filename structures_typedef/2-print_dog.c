#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a do
 * @d: structure we are useing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name is: (nil)\n");
}
else
{
printf("Name is: %s\n", d->name);
}
printf("Age is: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner is: (nil)\n");
}
else
{
printf("Owner is: %s\n", d->owner);
}
}
}

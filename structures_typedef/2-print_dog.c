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
	  printf("(nil)\n");
	}
      else
	{
	  printf("%s\n", d->name);
	}
      if (d->age)
	{
	  printf("(nil)\n");
	}
      else
	{
	  printf("%f\n", d->age);
	}
      if (d->owner == NULL)
	{
	  printf("(nil)\n");
	}
      else
	{
	  printf("%s\n", d->owner);
	}
    }
}

#include "dog.h"
/**
 * new_dog - makes a new struct dog
 * @name - name of dog
 * @age - how old the dog is
 * @owner - who owns the dog
 * Return: outputs the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *dog1;
  dog1 = malloc(sizeof(dog_t));
  if (dog1 == NULL)
    {
      return (NULL);
    }
  dog1->name = name;
  dog1->age = age;
  dog1->owner = owner;
  return (dog1);
}

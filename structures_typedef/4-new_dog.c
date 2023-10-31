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
  char *temp1 = name, *temp2 = owner;
  dog1 = malloc(sizeof(dog_t));
  if (dog1 == NULL)
    {
      free(dog1);
      return (NULL);
    }
  temp1 = malloc(sizeof(char) * _strlen(name));
  if (temp1 == NULL)
    {
      free(temp1);
      return (NULL);
    }
  temp2 = malloc(sizeof(char) * _strlen(owner));
  if (temp2 == NULL)
    {
      free(temp2);
      return (NULL);
    }
  dog1->name = temp1;
  dog1->age = age;
  dog1->owner = temp2;
  return (dog1);
}

int _strlen(char *s)
{
  int temp = 0;
  while (s[temp] != '\0')
    {
      temp++;
    }
  return (temp);
}

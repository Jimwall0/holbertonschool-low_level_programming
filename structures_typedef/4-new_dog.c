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
  char *tname, *towner;
  dog1 = malloc(sizeof(*dog1));
  tname = malloc(sizeof(char) * _strlen(name));
  towner = malloc(sizeof(char) * _strlen(owner));
  if (dog1 == NULL || tname == NULL || towner == NULL)
    {
      free(towner);
      free(tname);
      free(dog1);
      return (NULL);
    }
  tname = _strcpy(name, tname);
  towner = _strcpy(owner, towner);
  (*dog1).name = tname;
  (*dog1).owner = towner;
  (*dog1).age = age;
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

char *_strcpy(char *s1, char *s2)
{
  int num;
  for (num = 0; s1[num] != '\0'; num++)
    {
      s2[num] = s1[num];
    }
  s2[num] = s1[num];
  return (s2);
}

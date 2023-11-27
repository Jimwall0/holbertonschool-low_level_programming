#include "lists.h"
/**
 * print_list - prints the content of a linked list
 * @h: provided list
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
/*temp for number of nodes*/
unsigned long int num = 0;
const list_t *temp = h;
/*checks and loop temp*/
while (temp != NULL)
{
/*checks string*/
if (temp->str != NULL)
{
printf("[%i] %s\n", temp->len, temp->str);
}
else
{
printf("[%i] (nil)\n", temp->len);
}
num++;
temp = temp->next;
}
return (num);
}

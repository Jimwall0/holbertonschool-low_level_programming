#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: provided list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
/*temp node*/
const list_t *temp = h;
unsigned long int num = 0;
while (temp != NULL)
{
	num++;
	temp = temp->next;
}
return (num);
}


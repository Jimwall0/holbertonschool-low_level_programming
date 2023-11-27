#include "lists.h"
/**
 * add_node - adds a node
 * @head: new head?
 * @str: value
 */
list_t *add_node(list_t **head, const char *str)
{
  /*initialize node*/
  unsigned lists_t node;
  node = malloc(sizeof(struct list_t));
  if (node == NULL)
    {
      return (&node);
    }
  node->next = head;
  node->str = strcpy(str, node->str);
  head = node;
  return (node);
}

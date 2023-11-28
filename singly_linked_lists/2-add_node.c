#include "lists.h"
/**
 * add_node - adds a node
 * @head: new head?
 * @str: value
 */
list_t *add_node(list_t **head, const char *str)
{
  /*initialize node*/
  list_t *node;
  node = malloc(sizeof(list_t));
  /*check node*/
  if (node == NULL)
    {
      free(node);
      return (NULL);
    }
  node->str = strdup(str);
  node->next = *head;
  *head = node;
  return (node);
}

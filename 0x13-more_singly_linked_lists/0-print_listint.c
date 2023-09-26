#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
  listint_t *head = NULL;
  add_nodeint_end(&head, 1);
  add_nodeint_end(&head, 2);
  add_nodeint_end(&head, 3);
  add_nodeint_end(&head, 4);
  size_t num_nodes = print_listint(head);
  printf("Number of nodes: %d\n", num_nodes);
  return (0);
}

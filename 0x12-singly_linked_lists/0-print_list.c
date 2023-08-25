#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
  int count = 0;

  while (h)
    {
      if (h->str == NULL)
	{
	  printf("[0] (nil)\n");
	}
      else
	{
	  printf("[%d] %s\n", h->len, h->str);
	}
      count++;
      h = h->next;
    }
  return (count);
}

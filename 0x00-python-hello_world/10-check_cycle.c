#include "lists.h"

/**
  * check_cycle - checks if singly linked list has a cycle
  * @list: pointer to the list
  * Return: 0 if no cycle
  * 1 if there is a cycle
  */

int check_cycle(listint_t *list)
{
	listint_t *t;
	listint_t *s;

	if (list == NULL)
		return (0);
	t = list->next;
	s = list;
	while (t->next->next != NULL && s->next != NULL)
	{
		if (t == s)
		{
			return (1);
		}
		t = t->next->next;
		s = s->next;
	}
	return (0);
}

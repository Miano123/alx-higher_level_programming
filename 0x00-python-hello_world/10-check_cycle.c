#include "lists.h"

/**
  * check_cycle - checks if singly linked list has a cycle
  * @list: pointer to the list
  * Return: 0 if no cycle or 1 if there is a cycle
  */

int check_cycle(listint_t *list)
{
	listint_t *p;
	listint_t *s;

	if (list == NULL)
		return (0);
	p = list;
	s = list;
	while (p->next->next != NULL && s->next != NULL)
	{
		p = p->next->next;
		s = s->next;
		if (p == s)
		{
			p = list;
			while (p != s)
			{
				p = p->next;
				s = s->next;
			}
			return (1);
		}
	}
	return (0);
}

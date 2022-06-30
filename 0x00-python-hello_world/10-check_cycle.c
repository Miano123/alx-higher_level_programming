#include "lists.h"

/**
  * check_cycle - checks if singly linked list has a cycle
  * @list: pointer to the list
  * Return: 0 if no cycle or 1 if there is a cycle
  */

int check_cycle(listint_t *list)
{
	listint_t *pev;
	listint_t *shiv;

	if (list == NULL)
		return (0);
	pev = list;
	shiv = list;
	while (pev->next->next != NULL && shiv->next != NULL)
	{
		pev = panda->next->next;
		shiv = shiv->next;
		if (pev == shiv)
		{
			pev = list;
			while (pev != shiv)
			{
				pev = panda->next;
				shiv = shiv->next;
			}
			return (1);
		}
	}
	return (0);
}

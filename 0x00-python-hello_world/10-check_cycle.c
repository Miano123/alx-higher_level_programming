#include "lists.h"

/**
  * check_cycle - checks if singly linked list has a cycle
  * @list: pointer to the list
  * Return: 0 if no cycle or 1 if there is a cycle
  */

int check_cycle(listint_t *list)
{
	listint_t *panda;
	listint_t *shiv;

	if (list == NULL)
		return (0);
	panda = list;
	shiv = list;
	while (panda->next->next != NULL && shiv->next != NULL)
	{
		panda = panda->next->next;
		shiv = shiv->next;
		if (panda == shiv)
		{
			panda = list;
			while (panda != shiv)
			{
				panda = panda->next;
				shiv = shiv->next;
			}
			return (1);
		}
	}
	return (0);
}

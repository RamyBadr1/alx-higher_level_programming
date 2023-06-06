#include "lists.h"

/**
 * check_cycle - checks if a list is in an endless cycle
 * @list: the list
 * Return: 0 if no loop or cycle is detected || 1 if there is a cycle or a loop
 */

int check_cycle(listint_t *list)
{
	listint_t *doubly = list;
	listint_t *regular = list;

	if (list == NULL)
		return (0);

	while (doubly != NULL && doubly->next != NULL)
	{
		regular = regular->next;
		doubly = doubly->next->next;

		if (regular == doubly)
			return (1);
	}
	return (0);
}

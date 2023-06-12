#include "lists.h"
#include <stddef.h>

int check_palindrome(listint_t **head, listint_t *last);

/**
 * is_palindrome - to check if list is palindrome
 * @head: pointer to list begining
 * Return: 0 not palindrome || 1 palindrome
 */
int is_palindrome(listint_t **head)
{
	if (!head || *head == NULL)
		return (1);
	return (check_palindrome(head, *head));
}

/**
 * check_palindrome - check if the list is palindrome
 * @head: pointer to list beginning
 * @last: pointer to list end
 * Return: 0 not palindrom || 1 palindrome
 */
int check_palindrome(listint_t **head, listint_t *last)
{
	if (!last)
		return (1);

	if (check_palindrome(head, last->next) && (*head)->n == last->n)
	{
		*head = (*head)->next;
		return (1);
	}

	return (0);
}

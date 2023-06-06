#include "lists.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * insert_node - inserts a number in linked list
 * @head: linked list
 * @number: number to insert
 * Return: pointer to the new node || NULL
**/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *newNode = NULL;
	listint_t *temporary = NULL;

	if (head == NULL)
		return (head);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (newNode);

	newNode->n = number;
	newNode->next = NULL;

	if (*head == NULL || (*head)->n > number)
	{
		newNode->next = *head;
		return (*head = newNode);
	}
	else
	{
		while (current != NULL && current->n < number)
		{
			temporary = current;
			current = current->next;
		}
		temporary->next = newNode;
		newNode->next = current;
	}

	return (newNode);
}

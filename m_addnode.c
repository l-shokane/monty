#include "monty.h"
/**
 * addnode - Function that adds node to the head stack
 * @head: Beggining of stack
 * @n: new_value
 * Return: void
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

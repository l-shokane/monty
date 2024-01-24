#include "monty.h"
/**
 * op_pop - Function that prints the top of stack
 * @head: Beggining of stack
 * @counter: line_number
 * Return: void
*/
void op_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		stack_f(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

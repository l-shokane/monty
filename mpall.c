#include "monty.h"
/**
 * op_pall - Function that prints the stack
 * @head: Beginning of stack
 * @counter: void
 * Return: void
*/
void op_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

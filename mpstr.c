#include "monty.h"
/**
 * op_pstr - Function that prints the first string at the top of the stack,
 * followed by a new line
 * @head: Beggining of stack
 * @counter: line_number
 * Return: void
*/
void op_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

#include "monty.h"
/**
 * op_pint - Function that prints the top
 * @head: Begging of stack
 * @counter: line_number
 * Return: void
*/
void op_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		stack_f(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

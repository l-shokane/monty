#include "monty.h"
/**
  *op_sub- Function for subtration
  *@head: Beggining of stack
  *@counter: line_number
  *Return: Void
 */
void op_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sus, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		stack_f(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sus = temp->next->n - temp->n;
	temp->next->n = sus;
	*head = temp->next;
	free(temp);
}

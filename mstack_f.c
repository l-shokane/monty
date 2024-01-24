#include "monty.h"
/**
* stack_f -Function that frees a doubly linked list
* @head: Begging of stack
*/
void stack_f(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}

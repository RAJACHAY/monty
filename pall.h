#include "monty.h"
/**
 * f_pall - function that prints the stack
 * @head: stack head
 * @counter: that count
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;

	while (current)
	{
		printf("%d\n", current->curre);
		current = current->next;
	}
}

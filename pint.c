#include "monty.h"

/**
 * pint - prints the top node of the stack
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void pint(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	(void)line_num;
	if (stack == NULL || *stack == NULL)
		return;

	printf("%d\n", temp->n);
}

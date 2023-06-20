#include "monty.h"

/**
 * pop - deletes the top of the syack
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (!stack || !(*stack))
	{
		printf("L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;
	free(temp);
}

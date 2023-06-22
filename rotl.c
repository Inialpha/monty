#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *temp, *tail;

	(void)line_num;
	if (!stack || !(*stack) || (!(*stack)->next))
		return;

	tail = *stack;
	while (tail->next)
		tail = tail->next;

	temp = *stack;
	temp->prev = tail;
	tail->next = temp;
	*stack = (*stack)->next;
	temp->next = NULL;
	(*stack)->prev = NULL;
}

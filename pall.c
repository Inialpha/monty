#include "monty.h"

/**
 * pall - prints all the stack or queue data
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void pall(stack_t **stack, unsigned int line_num)
{
	print_stack(stack, line_num);
}

/**
 * print_stack - print all the data in the stack
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void print_stack(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	(void)line_num;
	if (!stack || !(*stack))
		return;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}


/**
 * pstr - prints all the stack or queue data
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void pstr(stack_t **stack, unsigned int line_num)
{
	pstr_stack(stack, line_num);
}

/**
 * pstr_stack - print all the data in the stack
 * @stack: pointer to the top of the stack
 * @line_num: line index
 */

void pstr_stack(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	(void)line_num;
	if (!stack || !(*stack))
	{
		printf("\n");
		return;
	}

	while (temp)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");

}

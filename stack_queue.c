#include "monty.h"


/**
 * op_stack - operate asv stack
 * @stack: pointer to the top of the stack
 * @line_num: line index;
 */

void op_stack(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	info_f.flag = 0;
}


/**
 * queue - operate asv stack
 * @stack: pointer to the top of the stack
 * @line_num: line index;
 */
void queue(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	info_f.flag = 1;
}

#include "monty.h"

void sub(stack_t **stack, unsigned int line_number)
{
	int sub_result;

	if (*stack == NULL || (*stack)->next ==NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sub_result = (*stack)->next->n - (*stack)->n;

	pop(stack, line_number);
	(*stack)->n = sub_result;
}

#include "monty.h"

void rotr(stack_t **stack,  __attribute__((unused))  unsigned int line_number)
{
        stack_t *temp = *stack;
	stack_t *second_last = NULL;

        if (*stack == NULL || (*stack)->next == NULL)
          return;

        while (temp->next != NULL)
        {
		second_last = temp;
          temp = temp->next;
        }

        temp->next = *stack;
        (*stack)->prev = temp;
	second_last->next = NULL;
	temp->prev = NULL;
        *stack = temp;
}

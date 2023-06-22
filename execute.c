#include "monty.h"

/**
 * execute -  execute opcode commands
 * @stack: pointer to the top of the stack
 * @line_num: line index number
 */

void execute(stack_t **stack, unsigned int line_num)
{
	int i;
	instruction_t op[] = {
		{"push", push}, {"pop", pop}, {"pint", pint}, {"pall", pall},
		{"swap", swap}, {"add", add}, {"sub", sub}, {"div", op_div},
		{"mul", mul}, {"nop", nop}, {"mod", mod},
<<<<<<< HEAD
		{"pchar", pchar}, {"pstr", pstr}, {"rotr", rotr}, {NULL, NULL}};
=======
		{"pchar", pchar}, {"pstr", pstr}, {"rotl", rotl}, {NULL, NULL}};
>>>>>>> 80fdebd7ebd6af5b1a2bf37fda22497470ba2439

	for (i = 0; op[i].opcode && info_f.opcode; i++)
	{
		if (strcmp(op[i].opcode, info_f.opcode) == 0)
		{
			op[i].f(stack, line_num);
			return;
		}

	}


	if (op[i].opcode == NULL && info_f.opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num,  info_f.opcode);
		exit(EXIT_FAILURE);
	}
}

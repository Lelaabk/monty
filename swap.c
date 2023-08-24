#include "monty.h"
/**
 * swap - swap the top two elements of stack
 * @stack: pointer to stack
 * @line_nb: line number
 */
void swap(stack_t **stack, unsigned int line_nb)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_nb);
		free_stack(*stack);
		fclose(bus.file);
		exit(EXIT_FAILURE);
	}
	int tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
/**
 * execute - bexecute monty command
 * @content: command content
 * @stack: pointer to stack
 * @line_nb: line number
 * @file: file pointer
 */
void execute(char *content, stack_t **stack, unsigned int line_number, FILE *file)
{
//	char *opcode = strtok()
}

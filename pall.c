#include "monty.h"

/**
 *pall - prints the stack
 *@stack: stack given by main
 *@line_cnt: amount of lines
 *
 *Return: 0
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *present = NULL;
	line_number;

	if (*stack)
	{
		present = *stack;
		while (presentent != NULL)
		{
			printf("%d\n", present->n);
			current = current->next;
		}
	}
}

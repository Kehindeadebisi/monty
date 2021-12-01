#include "monty.h"

/**
 *pall - prints the stack
 *@stack: stack given by main
 *@line_cnt: amount of lines
 *
 *Return: 0
 */
void pall(stack_t **stack, unsigned int line_cnt)
{
	stack_t *present = NULL;
	line_cnt;

	if (*stack)
	{
		present = *stack;
		while (present != NULL)
		{
			printf("%d\n", present->n);
			present = present->next;
		}
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pint - Prints the value at the top of the stack.
 * @s: Pointer to the stack.
 */

void pint(Stack *s)
{
	if (isStackEmpty(s))
	{
		printf("L%d: can't pint, stack empty\n", __LINE__);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", s->stack[s->top]);
}


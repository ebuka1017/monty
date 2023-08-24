#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * initializeStack - Initializes the stack.
 * @s: Pointer to the stack.
 */
void initializeStack(Stack *s)
{
	s->top = -1;
}

/**
 * isStackFull - Checks if the stack is full.
 * @s: Pointer to the stack.
 * Return: 1 if stack is full, 0 otherwise.
 */
int isStackFull(Stack *s)
{
	return (s->top == STACK_SIZE - 1);
}

/**
 * isStackEmpty - Checks if the stack is empty.
 * @s: Pointer to the stack.
 * Return: 1 if stack is empty, 0 otherwise.
 */
int isStackEmpty(Stack *s)
{
	return (s->top == -1);
}

/**
 * push - Pushes a value onto the stack.
 * @s: Pointer to the stack.
 * @value: Value to be pushed.
 */
void push(Stack *s, int value)
{
	if (isStackFull(s))
	{
		printf("Stack overflow\n");
		exit(EXIT_FAILURE);
	}

	s->stack[++s->top] = value;
}

/**
 * pall - Prints all values on the stack.
 * @s: Pointer to the stack.
 */
void pall(Stack *s)
{
	for (int i = s->top; i >= 0; i--)
	{
		printf("%d\n", s->stack[i]);
	}
}



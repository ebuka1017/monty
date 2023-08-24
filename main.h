#ifndef MAIN_H
#define MAIN_H

#define STACK_SIZE 100

typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

void initializeStack(Stack *s);
int isStackFull(Stack *s);
int isStackEmpty(Stack *s);
void push(Stack *s, int value);
void pall(Stack *s);
void pint(Stack *s);

#endif


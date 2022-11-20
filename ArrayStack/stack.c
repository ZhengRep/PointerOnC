#include "stack.h"
#include<assert.h>

#define STACK_SIZE 100

static STACK_TYPE stack[STACK_SIZE]; //test static
static int top_element = -1;

void push(STACK_TYPE value)
{
	assert(!isFull());
	top_element++;
	stack[top_element] = value;
}

void pop(void)
{

}

STACK_TYPE top(void)
{
}

int is_empty(void)
{
	return 0;
}

int is_full(void)
{
	return 0;
}

#pragma once

#define STACK_TYPE int

void push(STACK_TYPE value);
void pop(void); //(void) no parameter; () a function call with arbitrary number of arguments will be accepted without warnings
STACK_TYPE top(void);
int is_empty(void);
int is_full(void);


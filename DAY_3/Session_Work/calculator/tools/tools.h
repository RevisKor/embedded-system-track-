#ifndef TOOLS_H
#define TOOLS_H

// standard imports
#include <stdio.h>
#include <unistd.h>

#define ONE_SECOND  1

// prototypes
void print_hello(void);

char get_operation(void);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int calculator();

void loading(void);

#endif
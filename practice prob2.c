#include <stdio.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;

void stack_full()
{
	printf("Stack is Full\n");
}

char stack_emptry()
{
	printf("Stack is empty\n");
	return NULL;
}

void push(char x)
{
	if (top >= MAX_SIZE - 1) {
		stack_full();
		return;
	}
	stack[++top] = x;
}

char pop()
{
	if (top == -1)
		return stack_emptry();
	return stack[top--];
}

int main(void)
{
	int i;
	char ret;
	char expr[128];
	
	printf("Enter an expression: \n");
	gets(expr);

	for (i = 0; i < strlen(expr); i++) {
		if (expr[i] == '(')
			push('(');
		else if (expr[i] == ')') {
			ret = pop();
			if (ret == NULL) {
				printf("Unbalanced\n");
				return 0;
			}
		}
	}

	if (top == -1)
		printf("Balanced\n");
	else
		printf("Unbalanced\n");
	return 0;
}
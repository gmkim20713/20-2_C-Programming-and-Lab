#include <stdio.h>

int main(void)
{
	int num;
	int rem[10], i, j;

	printf("1~100 사이의 양의 정수: ");
	scanf("%d", &num);

	for (i = 0; ; i++) {
		rem[i] = num % 2;
		num /= 2;
		if (num == 0)
			break;
	}

	for (j = i; j >= 0; j--)
		printf("%d", rem[j]);
	printf("\n");

	return 0;
}
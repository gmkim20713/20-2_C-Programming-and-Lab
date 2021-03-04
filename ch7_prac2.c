#include<stdio.h>
void rem(int num)
{
	if (num / 2)
		rem(num / 2);
	printf("%d", num % 2);
}
int main(void)
{
	int num;
	scanf("%d", &num);
	rem(num);
	return 0;
}

#include <stdio.h>

void intdivision(int a, int b, int* q, int* r);

int main(void)
{
	int A, B, quot, rem;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &A, &B);

	if (B == 0) {
		printf("0으로 나눌 수 없습니다.\n");
		return 1;
	}
	intdivision(A, B, &quot, &rem);
	printf("%d을 %d로 나누면 몫은 %d이고 나머지는 %d입니다.\n", A, B, quot, rem);
	
	return 0;
}

void intdivision(int a, int b, int* q, int* r)
{
	*q = a / b;
	*r = a % b;
}

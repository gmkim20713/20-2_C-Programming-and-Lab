#include <stdio.h>

void intdivision(int a, int b, int* q, int* r);

int main(void)
{
	int A, B, quot, rem;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &A, &B);

	if (B == 0) {
		printf("0���� ���� �� �����ϴ�.\n");
		return 1;
	}
	intdivision(A, B, &quot, &rem);
	printf("%d�� %d�� ������ ���� %d�̰� �������� %d�Դϴ�.\n", A, B, quot, rem);
	
	return 0;
}

void intdivision(int a, int b, int* q, int* r)
{
	*q = a / b;
	*r = a % b;
}

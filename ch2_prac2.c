#include <stdio.h>

int main(void)
{
	int num, res, d1, d2, d3;

	printf("1~100������ ���� �ϳ��� �Է��ϼ���: ");
	scanf("%d", &num);

	res = num * 9;

	d1 = res / 100;
	d2 = res % 100 / 10;
	d3 = res % 10;

	printf("���� %d�� 9�� ���ϸ� %d�� ���ɴϴ�.\n", num, res);
	printf("�̋� %d�� �� �ڸ� �� %d, %d, %d�� �� �ڸ� ���� �� ������ ��� ���ϸ� 9�� ���ɴϴ�.\n", res, d1, d2, d3);

	return 0;
}
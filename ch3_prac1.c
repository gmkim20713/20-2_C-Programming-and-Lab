#include <stdio.h>

int main(void)
{
	int num, d1, d2, d3, d4;

	printf("4�ڸ��� ������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num < 1000 || num > 9999) {
		printf("%d�� 4�ڸ� ������ �ƴմϴ�.\n", num);
	}
	else {
		d1 = num / 1000;
		d2 = (num / 100) % 10;
		d3 = (num / 10) % 10;
		d4 = num % 10;

		if (d1 == d4 && d2 == d3) {
			printf("%d��(��) ȸ�����Դϴ�.\n", num);
		}
		else {
			printf("%d��(��) ȸ������ �ƴմϴ�.\n", num);
		}

	return 0;
}
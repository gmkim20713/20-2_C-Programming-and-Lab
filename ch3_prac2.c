#include <stdio.h>

int main(void)
{
	int row, col, i, j;

	printf("#���� �簢���� ��� ���� ���� �Է��ϼ���: ");
	scanf("%d %d", &row, &col);

	if (row < 1 || col < 1) {
		printf("�߸��� �Է��Դϴ�.\n");
	}
	else {
		for (i = 1; i <= row; i++) {
			for (j = 1; j <= col; j++) {
				printf("#");
			}
			printf("\n");
		}
	}

	return 0;
}
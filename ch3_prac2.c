#include <stdio.h>

int main(void)
{
	int row, col, i, j;

	printf("#문자 사각형의 행과 열의 수를 입력하세요: ");
	scanf("%d %d", &row, &col);

	if (row < 1 || col < 1) {
		printf("잘못된 입력입니다.\n");
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
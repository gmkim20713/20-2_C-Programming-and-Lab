#include <stdio.h>

int main(void)
{
	int num, d1, d2, d3, d4;

	printf("4자리의 정수를 입력하세요: ");
	scanf("%d", &num);

	if (num < 1000 || num > 9999) {
		printf("%d는 4자리 정수가 아닙니다.\n", num);
	}
	else {
		d1 = num / 1000;
		d2 = (num / 100) % 10;
		d3 = (num / 10) % 10;
		d4 = num % 10;

		if (d1 == d4 && d2 == d3) {
			printf("%d은(는) 회문수입니다.\n", num);
		}
		else {
			printf("%d은(는) 회문수가 아닙니다.\n", num);
		}

	return 0;
}
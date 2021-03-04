#include <stdio.h>

int main(void)
{
	int num, res, d1, d2, d3;

	printf("1~100사이의 정수 하나를 입력하세요: ");
	scanf("%d", &num);

	res = num * 9;

	d1 = res / 100;
	d2 = res % 100 / 10;
	d3 = res % 10;

	printf("정수 %d에 9를 곱하면 %d가 나옵니다.\n", num, res);
	printf("이떄 %d의 각 자리 수 %d, %d, %d를 한 자리 수가 될 때까지 계속 더하면 9가 나옵니다.\n", res, d1, d2, d3);

	return 0;
}
#include <stdio.h>

short f(short n) {
	short c = 0;
	while (n != 0) {
		if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9)) c++;
		n /= 10;
	}
	return c;
}

int main(void)
{
	short A, B, clp, i, j;

	printf("두 개의 양의 정수 A,B를 입력하세요:\n");
	scanf("%hd %hd", &A, &B);

	if (A > B || A <= 0 || B <= 0)
		printf("잘못된 입력입니다.\n");
	else {
		for (i = A; i <= B; i++) {
			clp = f(i);
			if (clp == 0)
				printf("%hd ", i);
			else {
				for (j = 0; j < clp; j++) {
					printf("짝! ");
				}
			}
		}
	}

	return 0;
}

//32766까지만 정상작동//
//0<A<=B=32767이면 각종 숫자, "짝!" 무한 반복//
//B>32767이면 0<A<B이어도 "잘못된 입력입니다" 출력//
//B가 9자리 양수 이상이면 "짝!" 반복해서 출력 - 해당 범위에 포함되는 정수의 개수만큼 반복 출력//
//0<A=B의 경우에는 A와 B에 해당하는 정수 한번 출력//
//A>B 또는 A<=0 또는 B<=0의 경우에는 무조건(9자리 양수 이상이어도 해당) "잘못된 입력입니다" 출력//
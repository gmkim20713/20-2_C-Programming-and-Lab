#include <stdio.h>

#define MAX 20

void reversestr(char* orig);

int main(void)
{
	char str[MAX];

	printf("문자열을 입력하세요: ");
	scanf("%s", str);

	reversestr(str);

	printf("%s\n", str);

	return 0;
}

void reversestr(char* orig)
{
	int len = strlen(orig);
	int i;
	char temp;

	for (i = 0; i < len/2; i++) {
		temp = orig[i];
		orig[i] = orig[len - i - 1];
		orig[len - i - 1] = temp;
	}
}
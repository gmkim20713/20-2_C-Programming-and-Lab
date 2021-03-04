#include <stdio.h>
#include <string.h>

int main(void)
{
	char verb[30], noun[30], snt[200];

	printf("동사: ");
	scanf("%s", &verb);

	printf("명사: ");
	scanf("%s", &noun);

	sprintf(snt, "I like %sing %ss.\n", verb, noun);
	printf("%s", snt);

	return 0;
}
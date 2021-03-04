#include <stdio.h>

int main(void)
{
	float kg, lbs;

	printf("kg? ");
	scanf("%f", &kg);

	lbs = 2.2 * kg;

	printf("%.6f kg is %.6f lbs.\n", kg, lbs);

	return 0;
}
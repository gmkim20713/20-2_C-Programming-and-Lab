#include <stdio.h>

#define MIN_cos 2400

int taxi_fare(int d);

int main(void)
{
	int dis, fare;

	printf("이동거리: ");
	scanf("%d", &dis);

	fare = taxi_fare(dis);

	printf("택시 요금: %d\n", fare);

	return 0;
}

int taxi_fare(int d)
{
	int money;
	if (d <= 2000)
		money = 2400;
	else {
		d -= 2000;
		money = 2400;
		while (d > 0) {
			money += 100;
			d -= 160;
		}
	}

	return money;
}
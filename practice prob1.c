#include <stdio.h>
void ssort(int* secondarr, int remain);

int main(void)
{
	int arr[100];
	int num = 0;
	int i, n;

	while (1) {
		scanf("%d", &n);
		if (n == -1)
			break;
		arr[num] = n;
		num++;
	}

	for (i = 0; i < num; i++)
		ssort(arr + i, num - i);

	printf("오름차순 숫자: ");
	for (i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void ssort(int* secondarr, int remain)
{
	int i, min = secondarr[0], min_idx = 0, temp;
	for (i = 1; i < remain; i++) {
		if (secondarr[i] < min) {
			min = secondarr[i];
			min_inx = i;
		}
	}
	temp = secondarr[0];
	secondarr[0] = min;
	secondarr[min_inx) = temp;
	)
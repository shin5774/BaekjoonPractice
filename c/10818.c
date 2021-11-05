#include <stdio.h>

int main() {
	int num,max,min;
	int* arr;

	scanf("%d", &num);
	
	arr= malloc(sizeof(int) * num);

	for (int i = 0;i < num;i++) {
		scanf("%d", &arr[i]);
	}

	max = min = arr[0];

	for (int i = 1;i < num;i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("%d %d", min, max);
}
#include <stdio.h>

int main() {
	int num,x;
	int* arr;

	scanf("%d %d", &num, &x);

	arr = malloc(sizeof(int) * num);
	
	for (int i = 0;i < num;i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0;i < num;i++) {
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}
}
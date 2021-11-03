#include <stdio.h>

int main() {
	int num;
	int* arr;

	scanf("%d", &num);
	arr = malloc(sizeof(int) * num*2);

	for (int i = 0;i < num*2;i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0;i < num;i++) {
		printf("%d\n", arr[i * 2] + arr[i * 2 + 1]);
	}

}
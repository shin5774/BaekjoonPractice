#include <stdio.h>

int main() {
	int a, b;
	if (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}
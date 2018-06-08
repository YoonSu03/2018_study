#include <stdio.h>
#include <stdlib.h>

int f(int n);
int main(void) {
	int n, i;
	do {
		scanf("%d", &n);
		printf("1 ");
	} while (n < 3);
	for (i = 1; i < n; i++) {
		printf("%d ", f(i));
	}
	printf("\n\n");
	return 0;
}
int f(int n) {
	if (n <= 1) return 1;
	else
		return f(n - 1) + f(n - 2);
}

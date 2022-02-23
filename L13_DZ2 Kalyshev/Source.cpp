#include <stdio.h>

int F(int n) {
	if (n == 0) {
		return 0;
	}
	if (n > 0 && n % 2 == 0) {
		return F(n / 2);
	}
	if (n % 2 != 0) {
		return 1 + F(n - 1);
	}
}

void main() {
	printf("%d", F(22));
}
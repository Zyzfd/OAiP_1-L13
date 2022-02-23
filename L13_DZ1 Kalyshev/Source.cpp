#include <stdio.h>

int F(int n) {
	if (n == 1) {
		return 1;
	}

	if (n > 1) {
		return F(n - 1) + n;
	}
}

void main() {
	printf("%d", F(40));
}
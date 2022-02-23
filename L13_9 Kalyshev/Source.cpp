#include <stdio.h>
# define NUM 10
int array[NUM] = { 1, 3, 4, 8, 9, 10, 11, 15, 16, 18 };

void printArray() {
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");
}

int contains(int value) {
	int left = 0;
	int right = NUM - 1;

	while (left <= right) {
		int middle = (left + right) / 2;

		if (array[middle] == value) {
			return 1;
		}
		if (array[middle] < value) {
			left = middle + 1;
		}
		else {
			right = middle - 1;
		}
	}
	return 0;
}

int containsR(int left, int right, int value) {
	if (left > right) {
		return 0;
	}

	int middle = (left + right) / 2;

	if (array[middle] == value) {
		return 1;
	}

	if (array[middle] < value) {
		return containsR(middle + 1, right, value);
	}
	else {
		return containsR(left, middle - 1, value);
	}
}


void main() {
	printArray();

	printf("contains(1) = %d\n", contains(1));
	printf("contains(2) = %d\n", contains(2));
	printf("contains(3) = %d\n", contains(3));
	printf("contains(4) = %d\n", contains(4));
	printf("contains(5) = %d\n", contains(5));
	printf("contains(6) = %d\n", contains(6));
	printf("contains(10) = %d\n", contains(10));
	printf("contains(15) = %d\n", contains(15));
	printf("\n\n");
	printf("containsR(1) = %d\n", containsR(0, NUM - 1, 1));
	printf("containsR(2) = %d\n", containsR(0, NUM - 1, 2));
	printf("containsR(3) = %d\n", containsR(0, NUM - 1, 3));
	printf("containsR(4) = %d\n", containsR(0, NUM - 1, 4));
	printf("containsR(5) = %d\n", containsR(0, NUM - 1, 5));
	printf("containsR(6) = %d\n", containsR(0, NUM - 1, 6));
	printf("containsR(10) = %d\n", containsR(0, NUM - 1, 10));
	printf("containsR(15) = %d\n", containsR(0, NUM - 1, 15));
}
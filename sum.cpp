#include <stdio.h>

int sum(int a) {
	int sum = 0;

	for (int i = 0; i <= a; i++) {
		sum += i;
	}

	return sum;
}

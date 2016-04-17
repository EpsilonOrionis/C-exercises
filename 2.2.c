#include <stdio.h>
#define SIZE 10

void swap(int*, int*); // Prototipo

int main() {

	int i, vett[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

	for(i = 0; i < SIZE/2; i++) {

		swap(&vett[i], &vett[SIZE-i-1]);
	}

	for(i = 0; i < SIZE/2; i++) {

		printf("%d", vett[i]);
	}

	printf("\n");

	return 0;
}

void swap(int* a, int* b) {

	int c;
	c = *a;
	*a = *b;
	*b = c;
}

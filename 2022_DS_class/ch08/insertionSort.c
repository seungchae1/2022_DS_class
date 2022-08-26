#include <stdio.h>

void insertionSort(int* a, int n);

int main() {
	int a[] = { 5,17,27,1,8,3,4,20,30,7 };
	int n = sizeof(a) / sizeof(int);
	insertionSort(a,n);

	printf("»ğÀÔÁ¤·Ä\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

void insertionSort(int *a, int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > key) a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = key;
	}
}
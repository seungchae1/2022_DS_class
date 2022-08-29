#include <stdio.h>

void shellSort(int* a, int n);

int main() {
	int a[] = { 5,17,27,1,8,3,4,20,30,7 };
	int n = sizeof(a) / sizeof(int);
	shellSort(a,n);

	printf("½© Á¤·Ä\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

void shellSort(int *a, int n) {
	int i, j, key, t;
	for (t = n / 2; t >= 1; t /= 2) {
		for (i = t; i < n; i++) {
			key = a[i];
			for (j = i - t; j >= 0; j-=t) {
				if (a[j] > key) a[j + t] = a[j];
				else break;
			}
			a[j + t] = key;
		}
	}
}
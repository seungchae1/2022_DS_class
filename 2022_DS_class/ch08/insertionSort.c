#include <stdio.h>

int main() {
	int a[] = { 5,17,27,1,8,3,4,20,30,7 };
	insertionSort(a);
}

insertionSort(int *a) {
	int i, j, key, n=9;
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > key) a[j + 1] = key;
			else break;
		}
		a[j + 1] = key;
	}
}
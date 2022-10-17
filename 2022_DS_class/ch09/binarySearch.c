#include <stdio.h>

int binarySearch(int a[], int n, int key) {
	int left = 0, right = n - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key == a[mid])return mid;
		else if (key > a[mid])left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main()
{
	int i, key, index, n;
	int a[] = { 3,7,10,12,14,18,21,33,35,48 };
	n = sizeof(a) / sizeof(int);
	printf("ã�� ��� : ");
	for (i = 0; i < n; i++) printf("%5d", a[i]);
	printf("\nã�� �� : ");
	scanf_s("%d", &key);
	index = binarySearch(a, n, key);
	if (index < 0)printf("\nã���� �ϴ� ���� ����!\n");
	else printf("\n%d��(��) %d���� ã��!\n", key, index);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000

int main() {
	int* a = (int*)malloc(sizeof(int) * SIZE);
	
	a[0] = 10;
	printf("%d\n", a[0]);

	free(a); //동적할은 사용후 항상 할당해제(소멸)해야 한다.

	return 0;
}
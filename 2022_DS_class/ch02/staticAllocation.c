#include <stdio.h>
#define SIZE 1000000

int main() {
	int a[SIZE] = { 10, }; //배열 a는 4MB 크기를 요구함
	printf("%d\n", a[0]);
	
	return 0;
}
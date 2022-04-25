#include <stdio.h>

int main() {
	int i, j, b[5][3];
	int a[3][5] = { {5,41,24,6,10}, {50,33,20,15,11 },{7,17,35,21,16} };

	printf("<배열 a> \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			b[j][i] = a[i][j];
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n<배열 b> \n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
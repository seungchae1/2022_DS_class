#include <stdio.h>
#define SIZE 5
#define SIZE2 10

int main() {
	char a[] = "Walls have ears.";
	int i, j;
	char b[5][10] = 
	{ {' ',' ',' ',' ','A','\0'},
	{' ',' ',' ','A','B','C','\0'},
	{' ',' ','A','B','C','D','E','\0'},
	{' ','A','B','C','D','E','F','G','\0'},
	{'A','B','C','D','E','F','G','H','I','\0'} };
	printf("1. 배열 a : %s\n",a);
	printf("2. a 역순 : ");
	for (i = sizeof(a) - 1; i >= 0; i--) printf("%c", a[i]);

	printf("\n3. 배열 b에서 공백은 빼고 출력하기\n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE2; j++) {
			if (b[i][j] != ' ')printf("%c", b[i][j]);
		}
		printf("\n");
	}
	printf("4. 배열 b의 4열만 출력하기\n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE2; j++) {
			if (j == 4)printf("%c", b[i][j]);
			else printf(" ");
		}
		printf("\n");
	}
	for(j = 0; j < SIZE2; j++){
		for(i = SIZE-1; i >= 0 ; i--) {
			printf("%c", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
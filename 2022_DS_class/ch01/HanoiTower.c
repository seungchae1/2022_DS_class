#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) { //a는 출발지,b는 경유지, c는 도착지
	if (n == 1) printf("원판 %d, %c -> %c\n", n, a, c);
	else {
		HanoiTower(n - 1, a, c, b);
		printf("원판 %d, %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}

int main() {
	int n = 4;
	HanoiTower(n,'A','B','C');

	return 0;
}
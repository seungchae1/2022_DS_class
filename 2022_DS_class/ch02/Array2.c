#include <stdio.h>
#define SIZE 11
int main()
{
	char data[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };
	int index, i;

	printf("data[]:%s\n", data);
	printf("���� ��ġ : ");
	scanf_s("%d", &index); getchar();

	for (i =index; i < SIZE-1; i++)
	{
		data[i] = data[i+1];
	}
	printf("���� ��� : %s\n", data);

	return 0;
}
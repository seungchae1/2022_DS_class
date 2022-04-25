#include <stdio.h>
#define SIZE 11
int main()
{
	char data[] = { 'A','B','C','D','E','F','G','H','I','J','\0' };
	int index, i;
	char value;
	printf("data[]:%s\n", data);
	printf("»ğÀÔ À§Ä¡ : ");
	scanf_s("%d", &index); getchar();
	printf("»ğÀÔ data : ");
	scanf_s("%c", &value, 1); getchar();
	
	/*
	i = SIZE - 1;
	while (i > index)
	{
		data[i] = data[i - 1];
		i--;
	}
	*/
	for (i = SIZE - 1; i > index; i--)
	{
		data[i] = data[i - 1];
	}

	data[index] = value;
	data[SIZE - 1] = '\0';
	printf("data[]:%s\n", data);

	return 0;
}
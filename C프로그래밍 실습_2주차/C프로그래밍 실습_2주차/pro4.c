#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a;

	printf("�Է�: ");
	scanf("%d", &a);

	unsigned char b = a;

	printf("���(int) - >%d\n", a);
	printf("���(char) - >%u\n", b);

	return 0;
}
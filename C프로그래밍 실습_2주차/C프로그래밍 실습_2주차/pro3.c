#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a;

	printf("�Է�: ");
	scanf("%d", &a);

	char b = a;

	printf("���(int) - >%d\n", a);
	printf("���(char) - >%d\n", b);

	return 0;
}
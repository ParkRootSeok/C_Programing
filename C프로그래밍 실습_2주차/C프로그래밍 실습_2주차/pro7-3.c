#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char a;

	printf("�ҹ��� �Է�: ");
	scanf("%c", &a);

	printf("�빮�� ���: %c\n", a - ('a' - 'A'));

	return 0;
}
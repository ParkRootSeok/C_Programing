#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char a;

	printf("�빮�� �Է�: ");
	scanf("%c", &a);
	printf("�ҹ��� ���: %c\n", a + ('a' - 'A'));

	return 0;
}
#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char a;

	printf("�ҹ��� �Է�: ");
	scanf("%c", &a);

	printf("%c�� %d��° ���� �ҹ���", a, a - 'a');

	return 0;
}
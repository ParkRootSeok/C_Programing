#pragma warning(disable:4996) 
#include <stdio.h>

int main()
{
	char a;
	printf("������ �Է�(%%c) : ");
	scanf("%c", &a);

	printf("���ڷ� ���(\%%c): %c\n", a);
	printf("������ ���(\%%d): %d\n", a - '0');

	return 0;

}
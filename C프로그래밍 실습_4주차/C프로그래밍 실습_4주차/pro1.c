#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a,b,c,d,e,f;
	scanf("%d", &a);

	b = a / 10000; // b = 1
	a %= 10000; // a = 2345
	c = a / 1000; // c = 2
	a %= 1000; // a= 345
	d = a / 100; // d = 3
	a %= 100; // a = 45
	e = a / 10; // e = 4
	a %= 10; // a = 5
	f = a;

	// ���� �����ڸ����� ó��.(�����ڸ����� ó���� ����) �� ��� �� ����

	printf("%dTTHO %dTHO %dHUN %dTEN %d", b, c, d, e, f);

	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main()

{
	int y,m,d;

	scanf("%d/%d/%d", &y, &m, &d);
	printf("%d�� %02d�� %d��", y,m,d);

	return 0;
}
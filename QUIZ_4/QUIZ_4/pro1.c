#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N;
	int n1, n2, n3;
	int res, res1, res2;

	scanf("%d", &N);

	n3 = N / 100; // 100�� �ڸ�
	n2 = N / 10 % 10; // 10�� �ڸ�
	n1 = N % 10; // 1�� �ڸ� 
	
	res1 = (n2 < n1 && n1 > n3) * n1; // n1�� �ִ�
	res2 = (n1 < n2 && n2 > n3) * n2; // n2�� �ִ�
	
	res = res1 * !res2 + !res1 * res2 + (!res1 && !res2) * n3;

	res1 || res2 ? printf("%d", res) : printf("%d", res);

	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j, k = 0;
	int a, sum = 0;

	scanf("%d", &n);

	for (i = 2; i <=  n; i++)
	{
		j = 2;

		while (n % j != 0 && j < n)
		{
			j++;
		}

		if (j == n) // �Ҽ�
		{
			while (n > 0)
			{
				a = n % 10;
				n /= 10;

				sum += a;
			}
		}
		else // �Ҽ� X
		{
			while (k <= n)
			{
				k++;
				if (n % k == 0)
				{
					sum += k;
				}

			}
		}

	}

	printf("%d", sum);

}
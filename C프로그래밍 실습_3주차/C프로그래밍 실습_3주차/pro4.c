#include <stdio.h>
#pragma warning(disable:4996)

int main()

{
	double a;

	printf("�Ǽ� �Է�: ");
	scanf("%lf", &a);

	printf("�ݿø� ���� ���: %.0f", a); 
	// ���� X(������� X ����ó�� ���̰� �ϴ°�)
	
	printf("�ݿø� ���� ���: %d", (int)(a + 0.5));
	// ���� 
}

//�� �ΰ��� ��� ��� ��������. ������ �� ����.
#pragma warning(disable:4996) // scanf ��� ���� ����
#include <stdio.h>

int main()

{
	int m;
	int d;

	printf("���� �Է�\n");
	printf("�Է� �� ��: "); // ���
	scanf("%d%d", &m, &d); // �Է�(���� �տ� �ݵ�� &������)
	printf("������ %d�� %d�� �Դϴ�.\n", m, d);

	return 0;
}

// %d : �ԷµǴ� ���� ������ �ؼ�
/* ���ϸ�: assignment06.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void assignment04()
{
	float m;

	printf("����Ʈ�� ����(��������)?\n", &m);

	scanf("%f", &m);

	printf("%.2f �������� = %.2f", m, 0.3025 * m);

}

int main() {
	assignment04();
	return 0;

}
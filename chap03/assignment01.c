/* ���ϸ�: assignment01.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void asd(void)
{

	int s;

	printf("�� ���� ����?\n", &s);
	scanf("%d", &s);

	printf("���簢���� ����: %d\n", s * s);
	printf("���簢���� �ѷ�: %d\n", 4 * s);

}

int main() {
	asd();
	return 0;

}
/* ���ϸ�: assignment04.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void nm(void) {
	double n, m;

	printf("��(n)?\n", &n);
	scanf("%lf", &n);

	printf("�̵��Ÿ�(m)?\n", &m);
	scanf("%lf", &m);

	printf("%.2f J ", n * m);
}

int main() {

	nm();
	return 0;
}
/* ���ϸ�: assignment05.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double inch;

	printf("����(inch)?\n", &inch);
	scanf("%lf", &inch);

	printf("%lf inch = %lf cm", inch, 2.54 * inch);

	return 0;
}
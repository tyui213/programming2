/* ���ϸ�: assignment10.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double usd, krw;

void URW() {
	printf("USD?\n", &usd);
	scanf("%lf", &usd);

	printf("��/�޷� ȯ��?\n", &krw);
	scanf("%lf", &krw);

	printf("USD %.2f = KRW %.2f", usd, usd * krw);
}
int main() {
	URW();
	return 0;
}
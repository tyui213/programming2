/* ���ϸ�: assignment07.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double a;

void assgnment07(void) {
	printf("�Ǽ�?\n", &a);
	scanf("%lf", &a);

	printf("����: %e", a * a);
	printf("������: %e", a * a * a);

}
int main() {
	assgnment07();
	return 0;
}
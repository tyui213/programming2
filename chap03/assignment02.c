/* ���ϸ�: assignment02.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void asignment02(void)
{
	int w, l;

	printf("������ ����?\n");
	scanf("%d", &w);

	printf("������ ����?\n");
	scanf("%d", &l);

	printf("���簢���� ����:%d\n", w * l);
	printf("���簢���� �ѷ�:%d\n", (w + l) * 2);

}

int main() {

	asignment02();

	return 0;
}
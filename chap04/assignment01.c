/*
���ϸ�:asssignment01
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.09
����:  v0.1
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void get_energy(void)
{
	double kg, ms;

	printf("����(kg)?\n");
	scanf("%lf", &kg);

	printf("�ӷ�(m/s)?\n");
	scanf("%lf", &ms);

	printf("������� = %lf J", 1.0 / 2.0 * kg * (ms * ms));
}

int main()
{
	get_energy();
	return 0;
}
/*
���ϸ�:asssignment09
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.19
����:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int time();
int time1(int c);
int time2(int c2);
int time3(int c3);

int main()
{
	time();
	return 0;
}

int time()
{
	int c = 0;
	printf("����ð�(��)?\n");
	scanf("%d", &c);

	int result1 = time1(c);
	int result2 = time2(c);
	int result3 = time3(c);

	printf("����ð���");
	result1 ? printf("%d�ð�", result1) : 0;
	result2 ? printf("%d��", result2) : 0;
	result3 ? printf("%d��", result3) : 0;
	printf("�Դϴ�");

	return 0;
}

int time1(int c1)
{
	int hour = c1 / 3600;
	return hour;
}

int time2(int c2)
{
	int min = (c2 % 3600) / 60;
	return min;
}

int time3(int c3)
{
	int sec = c3 % 60;
	return sec;
}

/*
���ϸ�:asssignment08
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.09
����:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

double radius();
double calculate(double r);
void volume(double voulume);

int main()
{
    double length = radius();
    double voulume = calculate(length);
    volume(voulume);
    return 0;
}

// �������� ���̸� �Է¹���
double radius()
{
    double r;
    printf("�������� ����?\n");
    scanf("%lf", &r);
    return r;
}

// �������� �̿��� ���� ���Ǹ� ���
double calculate(double r)
{
    double voulume = (4.0 / 3.0) * PI * (r * r * r);
    return voulume;
}

// ���� ���Ǹ� ���
void volume(double voulume)
{
    printf("���� ����: %lf\n", voulume);
}
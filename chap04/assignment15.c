/*
���ϸ�:asssignment15
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.19
����:  v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ ���� �Է¹޴� �Լ�
double get_input_������() {
    double ������;
    printf("��/�޷� �Ÿű�����? ");
    scanf("%lf", &������);
    return ������;
}

double get_input_�����() {
    double �����;
    printf("ȯ�������(0~100%%)? ");
    scanf("%lf", &�����);
    return �����;
}

double get_input_�޷�() {
    double �޷�;
    printf("������ �޷�(USD)? ");
    scanf("%lf", &�޷�);
    return �޷�;
}

// ��� �Լ�
void calculate_exchange(double ������, double �����, double �޷��ݾ�) {
    double �������� = 0.0175;
    double ����ȯ�� = ������ + (������ * �������� * (1 - ����� / 100));
    double �ѱݾ� = ����ȯ�� * �޷��ݾ�;

    printf("�޷� �� �� ȯ���� %.6f�Դϴ�.\n", ����ȯ��);
    printf("USD %.2f�� �� �� ==> KRW %.2f�Դϴ�.\n", �޷��ݾ�, �ѱݾ�);
}

int main() {
    double ������ = get_input_������();
    double ����� = get_input_�����();
    double �޷��ݾ� = get_input_�޷�();

    calculate_exchange(������, �����, �޷��ݾ�);

    return 0;
}
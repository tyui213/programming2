/*
���ϸ�:asssignment16
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.19
����:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ ���� ���� �Է¹޴� �Լ� ����
double get_red(void);
double get_green(void);
double get_blue(void);

// RGB�� ����ϰ� ����ϴ� �Լ�
void count(double r, double g, double b);

int main() {
    // ������ ���� �޾Ƽ� ������ ����
    double red = get_red();
    double green = get_green();
    double blue = get_blue();

    // ��� �Լ� ȣ��
    count(red, green, blue);

    return 0;
}

double get_red(void) {
    double r;
    printf("red? ");
    scanf("%lf", &r);
    return r;
}

double get_green(void) {
    double g;
    printf("green? ");
    scanf("%lf", &g);
    return g;
}

double get_blue(void) {
    double b;
    printf("blue? ");
    scanf("%lf", &b);
    return b;
}

void count(double r, double g, double b) {
    // ���������� ��ȯ + �����÷ο� ����
    unsigned int red = (unsigned int)r & 0xFF;
    unsigned int green = (unsigned int)g & 0xFF;
    unsigned int blue = (unsigned int)b & 0xFF;

    // RGB Ʈ���÷� ���
    unsigned int rgb = (blue << 16) | (green << 8) | red;

    // ��� ���
    printf("RGB Ʈ���÷���: %06X\n", rgb);
}
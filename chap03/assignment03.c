/* ���ϸ�: assignment03.c

 * �ۼ���: ������

 * ��¥: 2025.04.07.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


double mass, height;

void get_mass(void) {
    printf("����(kg)?\n");
    scanf("%lf", &mass);
}

void get_height(void) {
    printf("����(m)?\n");
    scanf("%lf", &height);
}

void dpotential_energy(void) {
    double potential_energy = 9.8 * mass * height;
    printf("��ġ������: %f J\n", potential_energy);
}

int main() {
    get_mass();
    get_height();
    dpotential_energy();
    return 0;
}
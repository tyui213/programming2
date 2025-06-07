#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �׷��� �Լ� ����
void graph(int value, int scale) {
    int i;
    printf("%4d: ", value);    // �� �ڸ� ���� ���
    int stars = value / scale;
    for (i = 0; i < stars; i++) {
        putchar('*');
    }
    putchar('\n');
}

int main() {
    int num1, num2, num3;
    srand((unsigned)time(NULL));

    // 0~9999 ���� ������ �� 3�� ����
    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    // ������ 100���� �׷��� ���
    graph(num1, 100);
    graph(num2, 100);
    graph(num3, 100);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ¦������ �Ǻ��ϴ� �Լ�
int is_even(int n) {
    return n % 2 == 0;
}

// Ȧ������ �Ǻ��ϴ� �Լ�
int is_odd(int n) {
    return n % 2 != 0;
}

// ¦��/Ȧ�� ���� ���� �Լ�
void count_even_odd() {
    int n;
    int even_cnt = 0, odd_cnt = 0;

    printf("���� �Է� (�������� 0 �Է�):\n");
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (is_even(n))
            even_cnt++;
        else
            odd_cnt++;
    }
    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even_cnt, odd_cnt);
}

int main() {
    count_even_odd();
    return 0;
}
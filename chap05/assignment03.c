#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int amount;
    printf("�Ž�����? ");
    scanf("%d", &amount);
    int cut_amount = amount - (amount % 10);
    printf("�Ž����� (10���̸� ����): %d\n", cut_amount);

    int count;

    if (cut_amount >= 50000) {
        count = cut_amount / 50000;
        printf("%6d�� %2d��\n", 50000, count);
        cut_amount %= 50000;
    }

    if (cut_amount >= 10000) {
        count = cut_amount / 10000;
        printf("%6d�� %2d��\n", 10000, count);
        cut_amount %= 10000;
    }

    if (cut_amount >= 5000) {
        count = cut_amount / 5000;
        printf("%6d�� %2d��\n", 5000, count);
        cut_amount %= 5000;
    }

    if (cut_amount >= 1000) {
        count = cut_amount / 1000;
        printf("%6d�� %2d��\n", 1000, count);
        cut_amount %= 1000;
    }

    if (cut_amount >= 500) {
        count = cut_amount / 500;
        printf("%6d�� %2d��\n", 500, count);
        cut_amount %= 500;
    }

    if (cut_amount >= 100) {
        count = cut_amount / 100;
        printf("%6d�� %2d��\n", 100, count);
        cut_amount %= 100;
    }

    if (cut_amount >= 10) {
        count = cut_amount / 10;
        printf("%6d�� %2d��\n", 10, count);
        cut_amount %= 10;
    }

    return 0;
}
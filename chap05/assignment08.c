#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    unsigned int a, b, r;
    char op;

    printf("��Ʈ �����? ");
    if (scanf("%i %c %i", &a, &op, &b) != 3) {
        return 1;  // �Է� ���� ����
    }

    switch (op) {
    case '&': r = a & b; break;
    case '|': r = a | b; break;
    case '^': r = a ^ b; break;
    default:
        printf("�������� �ʴ� �������Դϴ�.\n");
        return 1;
    }

    // 16����(�빮��)�� ���, ���ξ� ����
    printf("%X %c %X = %X\n", a, op, b, r);
    return 0;
}
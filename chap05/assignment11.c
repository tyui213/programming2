#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    unsigned int value;

    for (int i = 0; i < 32; i++) {
        value = 1u << i;
        // "%08X" �� 8�ڸ� 16����(�빮��), "%u" �� ��ȣ ���� 10���� ���
        printf("%2d��° ��Ʈ: %08X = %u\n", i, value, value);
    }

    return 0;
}
/*
���ϸ�:asssignment07
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.19
����:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void printBitValue(int bit) {
    int value = 1 << bit;
    printf("%2d�� ��Ʈ�� 1�� ��: %08X %d\n", bit, value, value);
}

int main() {
    printBitValue(7);
    printBitValue(15);
    printBitValue(23);
    printBitValue(31);
    return 0;
}
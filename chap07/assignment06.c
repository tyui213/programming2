/* ���ϸ�: assignment06.c

 * ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ������ �������� ����� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.31.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� �迭�� ���� �迭 ��� �Լ�
void print_array_reverse(double arr[], int size) {
    int i;

    printf("�迭: ");
    for (i = 0; i < size; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    printf("����: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    print_array_reverse(arr, 10); // ���ο��� �Լ� ȣ�⸸!
    return 0;
}

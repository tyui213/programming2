#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���ο� ������ ���̸� �Ű������� �޾� ���簢���� �ѷ��� ��ȯ�ϴ� �Լ�
int get_perimeter(int width, int height) {
    return 2 * (width + height);
}

int ����()
{
    int width, height, perimeter;

    // ���� �Է�
    printf("����? ");
    scanf("%d", &width);

    // ���� �Է�
    printf("����? ");
    scanf("%d", &height);

    // �Լ� ȣ��� �ѷ� ���
    perimeter = get_perimeter(width, height);

    // ��� ���
    printf("���簢���� �ѷ�: %d\n", perimeter);
}

int main(void) {

    ����();
    return 0;
}
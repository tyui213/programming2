#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �޴� ��ȣ�� �����ϴ� �Լ�
int choose_menu() {
    int menu;
    while (1) {
        printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
        scanf("%d", &menu);
        if (menu >= 0 && menu <= 3) return menu;
        printf("�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���.\n");
    }
}

// choose_menu�� ȣ���ϴ� ����
int main() {
    int sel = choose_menu();
    printf("%d�� �޴��� �����ϼ̽��ϴ�.\n", sel);
    return 0;
}
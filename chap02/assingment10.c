//assignment10 ������ 2025-03-31

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void coverted_num(void) {
	int num;
	printf("8���� �Է��Ϸ��� 012, 16������ �Է��ϸ� 0x12ó�� �Է��ϼ���.\n");
	printf("����?");

	scanf("%i", &num);

	printf("8����: 0%o\n", num);
	printf("10����: %d\n", num);
	printf("16����: %#x\n", num);
}

int main(void)
{
	coverted_num();
	return 0;

}
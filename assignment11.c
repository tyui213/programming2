

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Pi(void)

{
	double Pi = 3.14159265;

	printf("pi = %.2f\n", Pi);
	printf("pi = %.4f\n", Pi);
	printf("pi = %.6f\n", Pi);
	printf("pi = %.8f\n", Pi);
	printf("pi = %e", Pi);
}

int main(void) {
	Pi();
	return 0;
}
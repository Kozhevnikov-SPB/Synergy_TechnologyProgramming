#include <stdio.h>

int main()  {
	
	int a, b;

	printf_s("A = ");
	scanf_s("%i", &a);
	printf_s("B = ");
	scanf_s("%i", &b);

	if (a > b) {
		printf("Больше");
	}
	else {
		if (a == b) {
			printf("Равны");
		}
		else {
			printf("Меньше");
		}		
	}
}
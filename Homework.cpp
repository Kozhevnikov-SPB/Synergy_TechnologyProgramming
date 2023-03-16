#include <stdio.h>
//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_01_01

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
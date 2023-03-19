//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_03_06_02
#include <stdio.h>


int main() {
	
	int a;

	do {
		printf("Ugadai chislo - ");
		scanf_s("%i", &a);
		if (a == 7) {
			printf("Chislo ugadano!\n");
			break;
		}
		else {
			if (a > 7)		printf("Bolshe\n");			
			if (a < 7)		printf("Menshe\n");			
			if (a > 10)		printf("Vvedenoe chislo bolshe chem 10\n");			
			if (a < 10)		printf("Vvedenoe chislo menshe chem 10\n");			
			if (a % 2 == 0)	printf("Vvedenoe chislo delitsia na 2\n");			
			if (a % 3 == 0)	printf("Vvedenoe chislo delitsia na 3\n");			
		}
	} while (true);
}
//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_03_05_02
#include <stdio.h>


int main() {
	
	int sum = 0, i = 5;

	do {
		sum += i;
		i++;
	} while (i <= 15);

	printf("Sum = %i", sum);
}
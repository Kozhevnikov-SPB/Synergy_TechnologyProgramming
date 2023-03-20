//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_03_05_01_2
#include <stdio.h>


int main() {
	
	int i = 0;

	while (i < 15)	{		
		printf("%i ", i);			//Вывожу числа от 0 с шагом 1 с количеством итераций 15. Вывод в строчку через пробел		
		i++;
	}

	printf("\n");					//Делаю перевод каретки на новую строчку

	i = 1;

	while (i < 15)	{
		printf("%i ", i);			//Вывожу только нечетные числа. Вывод в строчку через пробел
		i += 2;
	}
}
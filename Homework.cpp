//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_03_08
#include <stdio.h>


int main() {
	
	int n, a, a_prev;
	int min, max, sum;
	//Вводим количество чисел для обработки		
	printf("Vvedite kolichestvo chisel = ");
	scanf_s("%i", &n);

	//Если количество чисел меньше или равно нулю завершаем программу с ошибкой
	if (n <= 0) {
		printf("Error input");
		return 0;
	}

	//Начинаем ввод и обработку чисел
	printf("Vvedite chislo 1 = ");
	scanf_s("%i", &a_prev);	

	sum = a_prev;
	min = max = a_prev;

	for (int i = 2; i <= n; i++) {
		printf("Vvedite chislo %i = ", i);
		scanf_s("%i", &a);

		if (a < a_prev)	min = a;				//Ищем минимальное число	
		if (a > a_prev)	max = a;				//Ищем максимальное число
		sum += a;								//Вычисляем сумму чисел
		a_prev = a;
	}

	printf("Min = %i, Max = %i, Sum = %i, Mid = %.3f", min, max, sum, float(sum) / float(n));
}
//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_02_Final
#include <stdio.h>


int main()  {
	
	int a = 1, sum = 0;

	while (a < 3) {		
		sum = sum + a;		
		printf("%i+", a);
		a++;		
	}
	printf(" Sum = %i\n", sum);

	a = 0;
	sum = 0;

	while (a < 3) {		
		sum = sum + a;			
		printf("%i+", a);
		a++;		
	}
	printf(" Sum = %i\n", sum);
}
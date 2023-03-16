#include <stdio.h>
//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_02_03

int main()  {
	
	int pin1, pin2;

	printf_s("pin1 = ");
	scanf_s("%i", &pin1);
	printf_s("pin2 = ");
	scanf_s("%i", &pin2);

	if ((pin1 == 111) && (pin2 == 221))	{
		printf("OK");
	}
	else {	
		printf("Error");		
	}
}
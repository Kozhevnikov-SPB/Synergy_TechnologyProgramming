﻿#include <stdio.h>
//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/blob/Work_02_03_02

int main()  {
	
	long long int pin1, pin2;

	printf_s("pin1 = ");
	scanf_s("%lli", &pin1);
	printf_s("pin2 = ");
	scanf_s("%lli", &pin2);

	if (((pin1 == 4111) && (pin2 == 3221)) || ((pin1 == 5331) && (pin2 == 6531))) {
		printf("OK");
	}
	else {	
		printf("Error");		
	}
}
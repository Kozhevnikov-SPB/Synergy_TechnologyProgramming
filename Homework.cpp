#include <stdio.h>

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
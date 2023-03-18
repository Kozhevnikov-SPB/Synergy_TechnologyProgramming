//Ссылка на программу в репозитории - https://github.com/Kozhevnikov-SPB/Synergy_TechnologyProgramming/tree/Work_02_Final
#include <stdio.h>


int main()  {
	
	//Объявляем переменные для ввода дня, месяца и года
	int d, m, y; 

	printf("Day = ");
	scanf_s("%i", &d);
	printf("Mounth = ");
	scanf_s("%i", &m);
	printf("Year = ");
	scanf_s("%i", &y);

	//Проверяем условие - правильно введен день или месяц
	if (d > 31 || m > 12) {
		printf("Error input data");
	}
	else {

		//Проверяем первое условие - високосный или не високосный год
		if (y % 4 == 0) {
			printf("Leap year\n");			//Год високосный
		}
		else {
			printf("Not a leap year\n");	//Не високосный год
		}

		//Проверяем второе условие - год по восточному календарю
		int e = y % 12;
		switch (e) {
		case 0:									//Год Обезьяны
			printf("Year of the Monkey\n");
			break;
		case 1:									//Год Петуха
			printf("Year of the Rooster\n");
			break;
		case 2:									//Год Собаки
			printf("Year of the Dog\n");
			break;
		case 3:									//Год кабана
			printf("Year of the Boar\n");
			break;
		case 4:									//Год Крысы
			printf("Year of the Rat\n");
			break;
		case 5:									//Год Быка
			printf("Year of the Bull\n");
			break;
		case 6:									//Год Тигра
			printf("Year of the Tiger\n");
			break;
		case 7:									//Год Кролика
			printf("Year of the Rabbit\n");
			break;
		case 8:									//Год Дракона
			printf("Year of the Dragon\n");
			break;
		case 9:									//Год Змеи
			printf("Year of the Snake\n");
			break;
		case 10:								//Год Лошади
			printf("Year of the Horse\n");
			break;
		case 11:								//Год Козы
			printf("Year of the Goat\n");
			break;
		}

		//Проверяем третье условие - знак зодиака
		if ((m == 12 && d >= 22) || (m == 1 && d <= 20)) {		//Козерог
			printf("Zodiac sign Capricorn\n");
		}
		else if ((m == 1 && d >= 21) || (m == 2 && d <= 18)) {		//Водолей
			printf("Zodiac sign Aquarius\n");
		}
		else if ((m == 2 && d >= 19) || (m == 3 && d <= 20)) {		//Рыбы
			printf("Zodiac sign Pisces\n");
		}
		else if ((m == 3 && d >= 21) || (m == 4 && d <= 20)) {		//Овен
			printf("Zodiac sign Aries\n");
		}
		else if ((m == 4 && d >= 21) || (m == 5 && d <= 21)) {		//Телец
			printf("Zodiac sign Taurus\n");
		}
		else if ((m == 5 && d >= 22) || (m == 6 && d <= 21)) {		//Близнецы
			printf("Zodiac sign \n");
		}
		else if ((m == 6 && d >= 22) || (m == 7 && d <= 22)) {		//Рак
			printf("Zodiac sign Cancer\n");
		}
		else if ((m == 7 && d >= 23) || (m == 8 && d <= 23)) {		//Лев
			printf("Zodiac sign Leo\n");
		}
		else if ((m == 8 && d >= 24) || (m == 9 && d <= 22)) {		//Дева
			printf("Zodiac sign Virgo\n");
		}
		else if ((m == 9 && d > 23) || (m == 10 && d <= 23)) {		//Весы
			printf("Zodiac sign Libra\n");
		}
		else if ((m == 10 && d >= 24) || (m == 11 && d <= 22)) {	//Скорпион
			printf("Zodiac sign Scorpio\n");
		}
		else if ((m == 11 && d >= 23) || (m == 12 && d <= 21)) {	//Стрелец
			printf("Zodiac sign Saggitarius\n");
		}
		else {														//Ошибка вычисления знака зодиака
			printf("Parameter error for estimating Zodiac sign");
		}
	}
}
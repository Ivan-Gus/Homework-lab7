#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE 

int main() {

	setlocale(LC_CTYPE, "RUS");
	int x;
	puts("Введите номер месяца: ");
	scanf("%d", &x);
	switch (x) 
	{
		case 1:
			printf("Зима\n");
			break;
		case 2:
			printf("Зима\n");
			break;
		case 3:
			printf("Весна\n");
			break;
		case 4:
			printf("Весна\n");
			break;
		case 5:
			printf("Весна\n");
			break;
		case 6:
			printf("Лето\n");
			break;
		case 7:
			printf("Лето\n");
			break;
		case 8:
			printf("Лето\n");
			break;
		case 9:
			printf("Осень\n");
			break;
		case 10:
			printf("Осень\n");
			break;
		case 11:
			printf("Осень\n");
			break;
		case 12:
			printf("Зима\n");
			break;
		default:
			printf("Неправильный номер месяца\n");

	}

	return 0;
}
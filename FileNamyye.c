#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE 

int main() {

	setlocale(LC_CTYPE, "RUS");
	int x;
	puts("������� ����� ������: ");
	scanf("%d", &x);
	switch (x) 
	{
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("�����\n");
			break;
		case 4:
			printf("�����\n");
			break;
		case 5:
			printf("�����\n");
			break;
		case 6:
			printf("����\n");
			break;
		case 7:
			printf("����\n");
			break;
		case 8:
			printf("����\n");
			break;
		case 9:
			printf("�����\n");
			break;
		case 10:
			printf("�����\n");
			break;
		case 11:
			printf("�����\n");
			break;
		case 12:
			printf("����\n");
			break;
		default:
			printf("������������ ����� ������\n");

	}

	return 0;
}
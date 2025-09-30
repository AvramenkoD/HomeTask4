#include <stdio.h>
#include <locale.h>

int main()
{
	int numberA;
	int numberB;
	int rez;

	setlocale(LC_ALL, "RUS");

	puts("Введите номера ваших рабочих мест через пробел (А и В)...");
	scanf("%d %d", &numberA, &numberB);

	rez = (numberA % 2 == 1 && numberB % 2 == 0) || (numberB % 2 == 1 && numberA % 2 == 0);

	printf("Вы пьёте кофе (1 - да; 0 - нет): %d\n",rez);

	return 0;
}
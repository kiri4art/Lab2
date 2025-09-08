#include <locale.h>
#include <stdio.h>
float n = 11;
float k = 2;
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Сейчас %.0f часов, %.0f минут, 00 секунд\n", n, k);
	printf("Идёт %.0f минута\n", k);
	printf("До полуночи осталось %.0f часов и %.0f минут\n", 23 - n, 60 - k);
	printf("С 8.00 прошло %.0f секунд\n", ((n * 60.) + k) * 60.);
	printf("Текущий час = %3.2f суток и текущая минута = %4.3f часа\n", n / 24, k / 60);
}
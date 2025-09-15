#include <stdio.h>
#include <locale.h>
int m, t, S;
float result;
void main()
{
	setlocale(LC_ALL, "RUS");
	m = 120;
	t = 4000;
	S = 10;
	result = ((S * t) / 1000) / (m / 60);
	printf("Дано:\nПоезд за %d минут проходит %d столбов. Определить скорость поезда, если между столбами %d метров.\nОтвет: %.2f км/ч.\n", m, t, S, result);
}
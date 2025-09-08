#include <locale.h>
#include <stdio.h>
float l = 3;
float n = 333;
int k = 3;
int m = 3;
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n%10.0f\n%10.0f\n     __________\nОтвет:\n     %+08.3f\n", l, n, l / n);
}
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
	printf("����:\n����� �� %d ����� �������� %d �������. ���������� �������� ������, ���� ����� �������� %d ������.\n�����: %.2f ��/�.\n", m, t, S, result);
}
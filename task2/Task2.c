#include <locale.h>
#include <stdio.h>
float n = 11;
float k = 2;
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("������ %.0f �����, %.0f �����, 00 ������\n", n, k);
	printf("��� %.0f ������\n", k);
	printf("�� �������� �������� %.0f ����� � %.0f �����\n", 23 - n, 60 - k);
	printf("� 8.00 ������ %.0f ������\n", ((n * 60.) + k) * 60.);
	printf("������� ��� = %3.2f ����� � ������� ������ = %4.3f ����\n", n / 24, k / 60);
}
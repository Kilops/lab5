/*Волегжанин Павел, на 5. Вариант 6. Выислить силу притяжения между телами.*/
#include "pch.h"
#include "stdio.h"
#include <clocale>

int main()
{
	setlocale(LC_ALL, "Rus");
	float massa1 = 0;
	float massa2 = 0;
	float sila = 0;
	float rasst = 0;
	double const post = 0.0000000000667384;

	printf("Введите массу и второго тела в килограммах и расстояние между ними в метрах:\n");
	scanf_s("%f %f %f", &massa1, &massa2, &rasst);
	while (getchar() != '\n');
	if (!((massa1 > 0) && (massa2 > 0) && (rasst > 0)))
	{
		do
		{
			printf("Введите корректные значения(только положительные числа):\n");
			printf("Введите массу первого и второго тела (кг) и расстояние между ними(м):\n");
			scanf_s("%f %f %f", &massa1, &massa2, &rasst);
			while (getchar() != '\n');
		} while (!(massa1 > 0 && massa2 > 0 && rasst > 0));
	}

	sila = (post * massa1 * massa2) / (rasst*rasst);
	printf("Сила притяжения между телами= %.10f\n", sila);
	getchar();

	return 0;

}
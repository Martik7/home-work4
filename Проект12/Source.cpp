#include <iostream>
#include <stdio.h>
#include <locale.h>
void task1()
{
	/*Вычислить сумму чисел от 1 до N, возведенных в степень M.
	Возведение в степень оформить как многократное умножение*/

	int sum = 0, n, m;

	printf("Введите число: ");
	scanf_s("%d", &n);
	printf("В какую степень хотите возвести? ");
	scanf_s("%d", &m);

	n++;

	for (int i = 1; i<n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			i *= i;
			sum += i;
			printf("Result: %d\n", i);
		}
	}
}

void task2()
{
	/*У студента имеются накопления S тенге.Ежемесячная стипендия составляет А тенге, 
	а расходы на проживание превышают ее и составляют B тенге.
	в месяц Рост цен ежемесячно увеличивает расходы на 3 % .
	Определить, сколько месяцев сможет прожить студент, 
	используя только накопления и стипендию.*/

	int i=0;
	int a, b, c;
	printf("Введите накопления: ");
	scanf_s("%d", &c);
	printf("Введите стипендию: ");
	scanf_s("%d", &a);
	printf("Введите расходы: ");
	scanf_s("%d", &b);

	while (c>0)
	{
		c = c + a - b;
		b = ((b * 3) / 100) + b;
		i++;
	}
	printf("Студент проживет %d месяцев", i);
}

void task3()
{
	/*Дано натуральное число n(n<9999) и число m.
	Найти сумму m - последних цифр числа n.*/
	int a, s, m, k, n, i;
	printf("Число a: ");
	scanf_s("%d", &a);
	printf("Число m: ");
	scanf_s("%d", &m);

	s = 0;
	n = m;

	for (size_t i = 1; i <= m; i++)
	{
		k = n % 10;
		n = a / 10;
		s = s + k;
	}
	printf("Сумма m последних цифр числа есть %d", s);
}

void task4()
{
	int a, b, c, d, i, s;
	for (size_t i = 100; i <= 999; i++)
	{
	a = i / 100;
	b = i % 10;
	c = i % 100;
	d = c / 10;
	s = a + b + d;
		if (s / 7 && i % 7)
		{
			printf("%d\n", i); // числа кратные 7
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");

	int task = 0;
	int restart = 0;
	do
	{
		printf("Введите номер задания: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		default:
			break;
		}

		printf("\n----------------------\n");
		printf("Вы хотите продолжить?1/0\n");
		scanf_s("%d", &restart);

	} while (restart == 1);

	system("pause");
}
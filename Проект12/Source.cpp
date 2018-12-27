#include <iostream>
#include <stdio.h>
#include <locale.h>
void task1()
{
	/*��������� ����� ����� �� 1 �� N, ����������� � ������� M.
	���������� � ������� �������� ��� ������������ ���������*/

	int sum = 0, n, m;

	printf("������� �����: ");
	scanf_s("%d", &n);
	printf("� ����� ������� ������ ��������? ");
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
	/*� �������� ������� ���������� S �����.����������� ��������� ���������� � �����, 
	� ������� �� ���������� ��������� �� � ���������� B �����.
	� ����� ���� ��� ���������� ����������� ������� �� 3 % .
	����������, ������� ������� ������ ������� �������, 
	��������� ������ ���������� � ���������.*/

	int i=0;
	int a, b, c;
	printf("������� ����������: ");
	scanf_s("%d", &c);
	printf("������� ���������: ");
	scanf_s("%d", &a);
	printf("������� �������: ");
	scanf_s("%d", &b);

	while (c>0)
	{
		c = c + a - b;
		b = ((b * 3) / 100) + b;
		i++;
	}
	printf("������� �������� %d �������", i);
}

void task3()
{
	/*���� ����������� ����� n(n<9999) � ����� m.
	����� ����� m - ��������� ���� ����� n.*/
	int a, s, m, k, n, i;
	printf("����� a: ");
	scanf_s("%d", &a);
	printf("����� m: ");
	scanf_s("%d", &m);

	s = 0;
	n = m;

	for (size_t i = 1; i <= m; i++)
	{
		k = n % 10;
		n = a / 10;
		s = s + k;
	}
	printf("����� m ��������� ���� ����� ���� %d", s);
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
			printf("%d\n", i); // ����� ������� 7
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
		printf("������� ����� �������: ");
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
		printf("�� ������ ����������?1/0\n");
		scanf_s("%d", &restart);

	} while (restart == 1);

	system("pause");
}
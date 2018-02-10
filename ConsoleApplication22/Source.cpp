#include <stdio.h>
#include <iostream>
#include<locale.h>
#include<time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int Z;
	do
	{
		cout << "Ввести номер задания: " << "\n";
		cin >> Z;
		switch (Z)
		{
		case 1:
		{
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 50 + rand() % 100;
				cout << "Массив: " << i << " со значением " << a[i] << "\n";
			}
		}
		break;
		case 2:
		{
			int a[8],c;
			for (int i = 0; i<8; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Убывающая последовательность: " << endl;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 7; j >=i; j--)
				{
					if (a[j] < a[j + 1])
					{
						c = a[j];
						a[j] = a[j + 1];
						a[j + 1] = c;
					}
				}
			}
			for (int i = 0; i < 8; i++)
			{
				cout  << a[i] << "\t";
			}
			cout << endl;
			cout << "Возрастающая последовательность: " << endl;
			for (int j = 7; j >= 0; j--)
			{
				for (int i = 0; i<j; i++)
				{
					if (a[i] > a[i + 1])
					{
						c = a[i];
						a[i] = a[i + 1];
						a[i + 1] = c;
					}
				}
			}
			for (int i = 0; i < 8; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 3:
		{
			int a[10], max =0,box=0;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout  << a[i] << "\t";
			}
			cout << endl;
			cout << "Поменять местами максимальный и первый элемент: " << endl;
			max = a[0];
			for (int i = 0; i < 10; i++)
			{
				if (a[i]>a[max])
				{
					max = i;
				box = a[0];
				a[0] = a[max];
				a[max] = box;
				}				
			}
			for (int i = 0; i < 10; i++)
			{
cout  << a[i] << "\t";
			}
		cout << endl;
		}
		break;
		case 4:
		{
			int a[15], max = 0, kol = 0;
			for (int i = 0; i < 15; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			max = a[0];
			cout << "Определить количество элементов, значение которых больше первого элемента: " << endl;
			for (int i = 0; i < 15; i++)
			{
				if (a[i] > a[0])
				{
					kol++;
				}
			}
			cout << kol << endl;
			}
		break;
		case 5:
		{
			int a[15], max = 0, min = 0,sum=0,raznost;
			for (int i = 0; i < 15; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			max = a[0];
			for (int i = 0; i < 15; i++)
			{
				if (a[i] > max)
				{
					max =a[i];
				}
			}
			cout <<"Максимальный элемент: "<< max << endl;
			min = a[0];
			for (int i = 0; i < 15; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
				}
				}
cout <<"Минимальный элемент: "<< min << endl;
				sum = max + min;
			raznost = max - min;
			cout << "Определить сумму и разность макисмального и минимального элементов: " << endl;
			cout <<" Сумма: "<< sum <<" Разность: "<<raznost<< endl;
			}
			break;
		default:
			break;
		}

	} while (Z>0);










}
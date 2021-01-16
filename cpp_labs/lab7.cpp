#include <windows.h>
#include <iostream>
#include <math.h>

void gen_massive(int[] , int);	//Генерація масиву
int maximal(int[], int);	//Знаходження максимального значення
void zamina(int*, int, int, int, int);	//Заміна відповідних елементів
void output(int[], int);	//Виведення масиву
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, p, q;
	printf("Василь Дон ІС-01\n");
	cout << "Ведіть кількість елементів масиву n: "; cin >> n;
	cout << "Ведіть число p: "; cin >> p;
	cout << "Ведіть число q: ";	cin >> q;
	int* numbers = new int[n];
	gen_massive(numbers, n);
	output(numbers, n);
	int max_number = maximal(numbers, n);
	cout << "Найбільший елемент масиву =  " << max_number << endl;
	zamina(numbers, n, p, q, max_number);
	output(numbers, n);
	delete[]numbers;
	return 0;
}
void gen_massive(int mass[], int length)	//Генерація масиву
{
	for (int i = 0; i < length; i++)
	{
		mass[i] = -100 + rand() % 200;
	}
}
int maximal(int mass[], int length)	//Знаходження максимального елемента масиву
{
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			max = mass[i];
		}
		if (mass[i] > max)
		{
			max = mass[i];
		}
	}
	return max;
}
void zamina(int *mass, int length, int p_0, int q_0, int zam)	//Заміна відповідних елементів
{
	for (int i = 0; i < length; i++)
	{
		if (fabs(*mass % p_0) == q_0)
		{
			*mass = zam * zam;
		}
		mass++;
	}
}
void output(int mass[], int length)	//Виведення масиву
{
	cout << "Масив:" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << mass[i] << " ";
	}
}

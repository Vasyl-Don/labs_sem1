#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <windows.h>

using namespace std;
typedef int Matr[20][20];	//Тип: матриця розміром до 20х20

void generate(Matr, int, int);	//Генерація масиву
void output(Matr, int, int);	//Виведення масиву
int max_column(Matr, int, int);	//Визначення стовпця з максимальним значенням матриці
int min_column(Matr, int, int);	//Визначення стовпця з мінімальним значенням матриці
void new_matr(Matr, Matr, int, int);	//Створення нової матриці, елементи якої співпадають з елементами іншої
void rokirovka(Matr, Matr, int, int, int);	//"Рокіровка" між стовпцями, що містять максимальне і мінімальне значення матрциі відповідно
void big_func(Matr, Matr, int, int);	//Виконання задачі для однієї матриці
int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Matr matrix_C, matrix_B, matrix_Y, matrix_Z;
	int n, m;
	cout << "Дон Василь ІС-01" << endl;
	cout << "Ведіть кількість рядків масиву: "; cin >> n;
	cout << "Ведіть кількість стовпців масиву: "; cin >> m;
	big_func(matrix_C, matrix_Y, n, m);
	system("pause");
	big_func(matrix_B, matrix_Z, n, m);
	return 0;
}
void big_func(Matr matrix_1, Matr matrix_2, int row, int column)	//Виконання задачі для однієї матриці
{
	int max_co, min_co;
	generate(matrix_1, row, column);	//Генерація матриці
	cout << "Матриця 1:" << endl;
	output(matrix_1, row, column);	//Виведення матриці
	max_co = max_column(matrix_1, row, column);	//Визначення стовпця з максимальним значенням матриці
	min_co = min_column(matrix_1, row, column);	//Визначення стовпця з мінімальним значенням матриці
	cout << "Стовпець, що містить максимальне значення матриці - стовпець " << max_co << endl;
	cout << "Стовпець, що містить мінімальне значення матриці - стовпець " << min_co << endl;
	if (max_co != min_co)
	{
		new_matr(matrix_1, matrix_2, row, column);	//Створення нової матриці
		rokirovka(matrix_1, matrix_2, row, max_co, min_co);	//"Рокіровка" між стовпцями
		cout << "Матриця 2:" << endl;
		output(matrix_2, row, column);	//Виведення матриці
	}
	else
	{
		cout << "Стовпець з максимальним значенням є також стовпцем з мінімальним значенням матриці, тому зміна стовпців не потрібна" << endl;
	}
}
void generate(Matr matrix, int row, int column)	//Генерація масиву
{
	srand(time(NULL));
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
		{
			matrix[i][j] = -100 + rand() % 200;
		}
	}
}
void output(Matr matrix, int row, int column)	//Виведення масиву
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}
int max_column(Matr matrix, int row, int column)	//Визначення стовпця з максимальним значенням матриці
{
	int max_col = 0;
	int max_num = matrix[0][0];
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
		{
			if (matrix[i][j] > max_num)
			{
				max_num = matrix[i][j];
				max_col = j;
			}
		}
	}
	return max_col;
}
int min_column(Matr matrix, int row, int column)	//Визначення стовпця з мінімальним значенням матриці
{
	int min_col = 0;
	int min_num = matrix[0][0];
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
		{
			if (matrix[i][j] < min_num)
			{
				min_num = matrix[i][j];
				min_col = j;
			}
		}
	}
	return min_col;
}
void new_matr(Matr matrix_orig, Matr matrix_new, int row, int column)	//Створення нової матриці, елементи якої співпадають з елементами іншої
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;j++)
		{
			matrix_new[i][j] = matrix_orig[i][j];
		}
	}
}
void rokirovka(Matr matrix_orig, Matr matrix_new, int row, int max_col, int min_col)	//"Рокіровка" між стовпцями, що містять максимальне і мінімальне значення матрциі відповідно
{
	int new_min_col = max_col;
	for (int i = 0; i < row; i++)
	{
		matrix_new[i][new_min_col] = matrix_orig[i][min_col];
	}
	int new_max_col = min_col;
	for (int i = 0; i < row; i++)
	{
		matrix_new[i][new_max_col] = matrix_orig[i][max_col];
	}
}

#include <iostream>
#include <math.h>

using namespace std;
float minimum(float local, float min);	//функція визначає найменше значення з двох
int main()
{
	float n, x, y, d, min_d;
	int min_n, i;
	setlocale(LC_ALL, "");
	printf("Дон Василь IС-01\n");
	cout << "Введiть кiлькiсть точок для обчислення: ";
	cin >> n;
	min_n = 0;
	for (i = 1; i <= n; i++)
	{
		cout << "Точка " << i << endl;
		cout << "Введiть х: ";
		cin >> x;
		cout << "Введiть y: ";
		cin >> y;
		d = sqrt(x * x + y * y);
		if (i == 1)
		{
			min_d = d;
		}
		min_d = minimum(d, min_d);
		if (min_d == d)
		{
			min_n = i;
		}
	}
	cout << "Найближча точка до початку координат - точка " << min_n;
	return 0;
}
float minimum(float local, float min)
{
	if (local <= min)
	{
		return local;
	}
	else
	{
		return min;
	}
}

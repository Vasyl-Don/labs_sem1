#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	printf("Дон Василь IС-01\n");
	float a, x, b;
	cout << "Введiть число а:";
	cin >> a;
	if (a > 0)
	{
		cout << "x = -1 * abs(a - 1) / (2 * a)\n";

		//Покрокове розв'язання:
		b = abs(a - 1);
		cout << "b = abs(a - 1) = "<< b << "\n";
		b = -1 * b;
		cout << "b = -1 * b = " << b << "\n";
		b = b / (2 * a);
		cout << "b = b / (2 * a) = " << b <<"\n";

		//Кінцевий вираз:
		x = -1 * abs(a - 1) / (2 * a);
	}
	else
	{
		cout << "x = 0.5 * log(1 + a * a)\n";

		//Покрокове розв'язання:
		b = 1 + a * a;
		cout << "b = 1 + a * a = " << b << "\n";
		b = log(b);
		cout << "b = log(b) = " << b << "\n";
		b = 0.5 * b;
		cout << "b = 0.5 * b = " << b << "\n";

		//Кінцевий вираз :
		x = 0.5 * log(1 + a * a);
	}
	cout << "x = " << x;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	printf("Дон Василь IС-01\n");
	int i, n, k;
	k = 1;
	cout << "Введiть n: ";
	cin >> n;
	if (n == 1 || n == 2)
	{
		cout << "k(" << n << ") = " << k;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			k = k * (4 * i - 6) / i;
			cout << "k(" << i << ") = " << k << endl;
		}
		return 0;
	}
}

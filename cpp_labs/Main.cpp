#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "");
	printf("Дон Василь IС-01\n");
	float M, N; //Ініціалізація змінних
	int D, Mol, St;
	using namespace std;
	cout << "Введiть число M: ";//Введення змінних
	cin >> M;
	cout << "Введiть число N: ";
	cin >> N;
	cout << M / N << endl;
	D = M / N;//Обчислення частки
	Mol = D % 10;//Молодша цифра цiлої частини
	St = (M / N - D) * 10;//Старша цифра дробової частини
	cout << "Молодша цифра цiлої частини частки вiд дiлення M на N: " << Mol << endl ;//Виведення результату
	cout << "Старша цифра дробової частини частки вiд дiлення M на N: " << St << endl ;

	return 0;
}
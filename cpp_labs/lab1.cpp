#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "");
	printf("Дон Василь IС-01\n");
	float M, N; //Ініціалізація змінних
	int D, Mol, St;
	using namespace std;
	cout << "Введіть число M: ";
	cin >> M;
	cout << "Введіть число N: ";
	cin >> N;
	cout << M / N << endl;
	D = M / N;
	Mol = D % 10;//Молодша цифра цiлої частини
	St = (M / N - D) * 10;//Старша цифра дробової частини
	cout << "Ìîëîäøà öèôðà öiëî¿ ÷àñòèíè ÷àñòêè âiä äiëåííÿ M íà N: " << Mol << endl ;
	cout << "Ñòàðøà öèôðà äðîáîâî¿ ÷àñòèíè ÷àñòêè âiä äiëåííÿ M íà N: " << St << endl ;

	return 0;
}

#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "");
	printf("��� ������ I�-01\n");
	float M, N; //����������� ������
	int D, Mol, St;
	using namespace std;
	cout << "����i�� ����� M: ";//�������� ������
	cin >> M;
	cout << "����i�� ����� N: ";
	cin >> N;
	cout << M / N << endl;
	D = M / N;//���������� ������
	Mol = D % 10;//������� ����� �i�� �������
	St = (M / N - D) * 10;//������ ����� ������� �������
	cout << "������� ����� �i�� ������� ������ �i� �i����� M �� N: " << Mol << endl ;//��������� ����������
	cout << "������ ����� ������� ������� ������ �i� �i����� M �� N: " << St << endl ;

	return 0;
}
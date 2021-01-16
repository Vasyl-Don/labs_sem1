#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    printf("Дон Василь IС-01\n");
    int n_dec;
    cout << "Введiть n: "; cin >> n_dec;
    int n_bin = 0;
    int g = 0;
    for (int i = 0; n_dec >= 1; i++)    //Переведення у двійкову СЧ
    {
        n_bin += (n_dec % 2) * pow(10 , i);
        n_dec /= 2;
        g++;  //Довжина числа
    }
    n_dec = 0;
    int dovzhyna = g;
    int zifra1;
    for (int i = 0; i < dovzhyna; i++)  //Переведення "навпаки" у десяткову СЧ
    {
        g--;
        zifra1 = n_bin / pow(10, g);
        n_bin -= zifra1 * pow(10, g);
        n_dec += zifra1 * pow(2, i);
    }
    cout << "Вiдповiдь: " << n_dec << endl;
}

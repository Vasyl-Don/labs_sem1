#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    float x, m, e, n, s, r, p1, p2;
    printf("Дон Василь IС-01\n");
    cout << "Введiть число x: ";
    cin >> x;
    cout << "Введiть число m: ";
    cin >> m;
    cout << "Введiть число e: ";
    cin >> e;

    n = 0;  //Лічильник
    s = 1;  //Сума ряду
    r = 1;  //Різниця сусідніх елементів
    p1 = 1; //Поточний член
    p2 = 1; //Наступний член

    while (r > e)
    {
        n = n + 1;
        //Визначення настпуного члена:
        p2 = p1 * x * (m - n + 1) / n;
        //Поточна сума:
        s = s + p2;
        //Перевірка точності:
        r = abs(p2 - p1);
        //Присвоюємо нове(наступне) значення поточному члену :
        p1 = p2;
    }
    cout << "s = " << s << "\n";
    cout << "Перевiрка: " << pow((1 + x), m);
    return 0;
}

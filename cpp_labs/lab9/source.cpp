#include "source.h"
void symbol_counter(string a)
{
    int symbols[128];   //Створення одновимірного масиву розміром 128(кількість символів у кодуванні ASCII)
    for (int i = 0; i < 128; i++)   //Заповнення його нулями
    {
        symbols[i] = 0;
    }
    int len = a.length();   //Довжина введеного рядка
    for (int i = 0; i < len; i++)
    {
        symbols[a[i]]++;    //Елемент масиву з індексом поточного символу збільшується на 1
    }
    output(symbols);
}
void output(int symbols[])
{
    char symbol;
    for (int i = 0; i < 128; i++)
    {
        if (symbols[i])
        {
            symbol = i; //Індекс автоматично перетворюється у символ з таким індексом
            cout << symbol << " - " << symbols[i] << endl;
        }
    }
}

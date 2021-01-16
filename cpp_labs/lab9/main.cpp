#include "Header.h"
int main()
{
    cout << "Don Vasyl IS-01" << endl;
    string a;
    cout << "Input a string of symbols: ";
    getline(cin, a);
    symbol_counter(a);
}

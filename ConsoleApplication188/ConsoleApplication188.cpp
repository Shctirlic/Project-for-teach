#include <iostream>
#include <windows.h>
#include "functions.h"

#pragma warning(disable : 4996)

using namespace std;

int main()
{
    Сurrency arr_currency[10];
    int      n = 10;

    filling_arr_from_file("currencies2.txt", arr_currency, n);

    system("cls");
    print_currencies(arr_currency, n);
    printf("Select first currency: ");
    int N1; cin >> N1;

    system("cls");
    print_currencies(arr_currency, n);
    printf("Select second currency: ");
    int N2; cin >> N2;

    system("cls");
    cout << "Enter amount: ";
    float sum; cin >> sum;

    system("cls");
    cout << arr_currency[N1 - 1].name << " --->" << arr_currency[N2 - 1].name << endl;
    cout << sum << " --->" << sum * arr_currency[N1 - 1].rate / arr_currency[N2 - 1].rate << endl;


    arr_free(arr_currency, n);
}

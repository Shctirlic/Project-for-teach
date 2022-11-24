#include "functions.h"
#pragma warning( disable: 4996)

void filling_arr_from_file(const char* path, Ñurrency* arr_currency, int n)
{
    ifstream fin(path);

    char buf[100];
    int  k = 0;

    while (true)
    {
        if (!fin.getline(buf, 100)) return;
        arr_currency[k].name = strdup(buf);

        fin.getline(buf, 100);
        arr_currency[k++].rate = atof(buf);
    }

    fin.close();
}
void print_currencies(Ñurrency* arr_currency, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%i. %s\t\t%.1fl \n", i + 1, arr_currency[i].name, arr_currency[i].rate);
    }
}
void arr_free(Ñurrency* arr_urrency, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(arr_urrency[i].name);
    }
}
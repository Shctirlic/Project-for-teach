#pragma once
#include <fstream>
using namespace std;



struct �urrency
{
    char*  name;
    double rate;
};

void filling_arr_from_file(const char* path, �urrency* arr_currency, int n);
void print_currencies(�urrency* arr_currency, int n);
void arr_free(�urrency* arr_currency, int n);


#pragma once
#include <fstream>
using namespace std;



struct Ñurrency
{
    char*  name;
    double rate;
};

void filling_arr_from_file(const char* path, Ñurrency* arr_currency, int n);
void print_currencies(Ñurrency* arr_currency, int n);
void arr_free(Ñurrency* arr_currency, int n);


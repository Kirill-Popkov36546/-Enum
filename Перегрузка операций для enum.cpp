﻿#include <iostream>
using namespace std; 
enum Cars { Москвич_400 = 1, Москвич_403, ВАЗ_21011, ВАЗ_21013, ВАЗ_2105, ВАЗ_2106, ГАЗ_М1 = 0 };
Cars operator+(const Cars& m, const int& b)
{
    Cars t = Cars(b + m);
    return (t = Cars(t % 7));
}
Cars operator+(const int& b, const Cars& m)
{
    return(m + b);
}
Cars operator++(Cars& m)
{
    return (m = Cars(m + 1));
}
Cars operator++(Cars& m, int)
{
    Cars t = m; m = Cars(m + 1);
    return t;
}
void print(const Cars& a)
{
    string Avto[7] =
    {
       "Москвич_400" , "Москвич_403" , "ВАЗ_21011" , "ВАЗ_21013" , "ВАЗ_2105" , "ВАЗ_2106" , "ГАЗ_М1"
    };
    cout << Avto[a] << endl;
};

int main()
{
    setlocale(LC_ALL, "Rus");



    Cars m =  ВАЗ_2105;
    print(m + 1);
    print(2 + m);
    print(operator+(m, 1));
    print(operator+(2, m));
    m++;
    print(m);
    print(++m);
    print(operator++(m));
    print(operator++(m, 0));
    print(m);

    system("pause");




}



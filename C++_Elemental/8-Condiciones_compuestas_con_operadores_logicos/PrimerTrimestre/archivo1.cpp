#include<iostream>

using namespace std;

int main()
{
    int dia,mes,ano;
    cout <<"Ingrese nro de día:";
    cin >>dia;
    cout <<"Ingrese nro de mes:";
    cin >>mes;
    cout <<"Ingrese nro de año:";
    cin >>ano;
    if (mes==1 || mes==2 || mes==3) 
    {
        cout <<"Corresponde al primer trimestre";
    }
    return 0;
}
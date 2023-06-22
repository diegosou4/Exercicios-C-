/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre
em graus Farenheit.
*/
#include <iostream>
#include <iomanip>


using namespace std;

int main(){


    float graus,conversor, f;
    conversor = 1.8;

    cout << "Informe a temperatura Celsius ";
    cin >> graus;
    f = (graus * conversor) + 32 ;
    cout << fixed << setprecision(2);
    cout << "Sua temperatura em Farenheit: é " << f << "\n"; 



    return 0;
}
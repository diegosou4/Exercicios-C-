
/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre
a temperatura em graus Celsius.
C = (5 * (F-32) / 9).
*/
#include <iostream>
#include <iomanip>


using namespace std;
int main(){

    
    float f,graus;

    cout << "Informe a temperatura Farenheit: ";
    cin >> f;
    graus = (5*(f - 32) / 9);
    cout << fixed << setprecision(2);
    cout << "Sua temperatura em graus é " << graus << "\n"; 



    return 0;
}
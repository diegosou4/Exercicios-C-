
/*
Faça um Programa que converta metros para centímetros.
*/
#include <iostream>

using namespace std;

int main(){
    
    float metros;
    int centimetros, conversão;
    conversão = 100;
    cout << "Digite a metragem ";
    cin >> metros;

    centimetros = metros * conversão;

    cout << "A medida tem " << centimetros << " Centimetros \n";
    return 0;
}
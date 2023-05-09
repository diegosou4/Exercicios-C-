
/*
Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
#include <iostream>
#include <math.h>
# define M_PI           3.14;

using namespace std;

int main(){
    
    float raio, valor;

    cout << "Informe o valor do raio:";
    cin >> raio;
    
    valor = (raio * raio) * M_PI;
    cout << "O Valor do cicurlo é " << valor << "\n";
    return 0;
}
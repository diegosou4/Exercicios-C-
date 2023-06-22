/*
Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
    o produto do dobro do primeiro com metade do segundo.
    a soma do triplo do primeiro com o terceiro.
    o terceiro elevado ao cubo.
*/
#include <iostream>

using namespace std;

int main(){
    

    int num1, num2;
    float num3, a, b, c;
    cout << "Digite o numero 1:";
    cin >> num1;
    cout << "Digite o numero 2:";
    cin >> num2;
    cout << "Digite o numero 3:";
    cin >> num3;

    a = (num1 * 2) + (num2 / 2);
    b = (num1 * 3) + (num3 );
    c = (num3 * num3 * num3);
    cout << "\n";

    cout << "O dobro do primeiro com metade do segundo é " << a << "\n" ;
    cout <<  "A soma do triplo do primeiro com o terceiro é " << b << "\n";
    cout <<  "O terceiro elevado ao cubo é " << c << "\n";


    return 0;
}
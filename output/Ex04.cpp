/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <iostream>


using namespace std;

int main(){

    int a, b, c, d, media;

    cout << "Digite a Primeira nota: ";
    cin >> a;
    cout << "Digite a Segunda nota: ";
    cin >> b;
    cout << "Digite a Terca nota: ";
    cin >> c;    
    cout << "Digite a Quarta nota: ";
    cin >> d;

    media = (a + b + c + d) / 4;
    cout << "A media do Aluno foi: " << media << "\n";
    return 0;
};
/*
Faça um Programa que peça dois números e imprima a soma.
*/
#include <iostream>


using namespace std;

int main(){

    int a, b, soma;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;

    if(a && b){
        soma = a + b;
    cout << "A soma dos numeros são: " << soma << "\n" ;
    } else {
        cout << "Numeros apresentados são invalidos por favor tente novamente:";
    }
    
    return 0;
};
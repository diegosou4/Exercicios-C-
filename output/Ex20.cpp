/*
Faça um Programa que peça um valor e mostre na tela se o 
valor é positivo ou negativo.
*/
#include <iostream>


using namespace std;


int main(){

    int numero;

    cout << "Informe um valor:";
    cin >> numero;
    if(numero < 0){
        cout << "O valor informado é negativo";
    }else{
        cout << "O valor informado é positivo";
    }

    return 0;
}
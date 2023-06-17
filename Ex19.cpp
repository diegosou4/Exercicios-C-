/*
Faça um Programa que peça dois números e imprima o maior deles.
*/


#include <iostream>



using namespace std;

int main(){

    int numeroUm;
    int numeroDois;
    int aux;

    cout << "Informe o primeiro numero:";
    cin >> numeroUm;
    cout << "Informe o segundo numero:";
    cin >> numeroDois;

    if(numeroUm < numeroDois){
        cout << "O segundo numero é maior";
        cout << "\nValor:" << numeroDois;
    }else if(numeroUm > numeroDois){
        cout << "O primeiro numero é maior";
        cout << "\nValor:" << numeroUm;
    } else{
        cout << "Ambos tem o mesmo valor";
    }

}
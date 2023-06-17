/*
Faça um Programa que leia três números e mostre o maior e o menor deles.
*/

#include <iostream>

using namespace std;

int main(){

    int numeroUm;
    int numeroDois;
    int numeroTres;
    int aux;

    cout << "Informe o primeiro numero:";
    cin >> numeroUm;
    cout << "Informe o segundo numero:";
    cin >> numeroDois;
    cout << "Informe o terceiro numero:";
    cin >> numeroTres;

    if(numeroUm < numeroDois){
        if(numeroUm < numeroTres)
        {
            aux = numeroUm;
        } else{
            aux = numeroTres;
        }
    }else if(numeroTres < numeroUm){
        if(numeroTres < numeroDois)
        {
            aux = numeroTres;
        }else{
            aux = numeroDois;
        }
    }
    if(aux == numeroUm){
        cout << "O menor numero foi o primeiro numero passado " << aux;
    }else if(aux == numeroDois){
        cout << "O menor numero foi o segundo numero passado " << aux;
    }else{
        cout << "O menor numero foi o terceiro numero passado " << aux;
    } 
    return 0;
}
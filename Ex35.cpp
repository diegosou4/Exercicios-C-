/*
Faça um Programa que peça um número correspondente a um determinado ano
 e em seguida informe se este ano é ou não bissexto.
*/

#include<iostream>

using namespace std;

int main(){

    int ano;
    int bi;
    cout << "Informe um ano:";
    cin >> ano;

    if(ano % 400 == 0){
        cout << "O ano e bissexto";
    }else{
        cout << "O ano e normal";
    }



    return 0;
}
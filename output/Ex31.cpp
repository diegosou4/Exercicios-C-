/*
Faça um Programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
*/
#include <iostream>

using namespace std;

int main(){

    int dia;
    cout << "Digite um numero correspondente da semana";
    cout << "\nEx: 1- Dom, 2- Seg, 3- Ter :";
    cin >> dia;
    if(dia == 1){
        cout << "Domingo";
    }else if(dia == 2){
        cout << "Segunda";
    }else if(dia == 3){
        cout << "Terça";
    }else if(dia == 4){
        cout << "Quarta";
    }else if(dia == 5){
        cout << "Quinta";
    }else if(dia == 6){
        cout << "Sexta";
    }else if(dia == 7){
        cout << "Sabado";
    } else {
        cout << "Dia invalido";
    }

}
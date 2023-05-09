/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/
#include <iostream>

using namespace std;

int main(){

    int horas,ganho,total;

    cout << "Quanto voce ganha por hora? \n";
    cin >> ganho;
    cout << "Quantas horas por mes? \n";
    cin >> horas;

    total = ganho * horas;

     cout << "Seu salario é: " << total << "euros. \n"; 
    return 0;
};
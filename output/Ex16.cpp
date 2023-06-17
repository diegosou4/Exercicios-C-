/*
Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 
metros quadrados e que a tinta é vendida em latas de 18 litros,
 que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o
 preço total.
*/
#include <iostream>
#include <cmath>


using namespace std;

int main(){


    int areaPintada;
    int valorTinta = 80;
    float rendimento = 3;
    float litros;
    float litrosporLata = 18;
    float valorTotal;
    cout << "Bem vindo ao C++ Tintas a melhor loja de tintas";
    cout << "\nInforme o tamanho da area que voce quer pintar em metros quadrados:";
    cin >> areaPintada;
   
    litros = ceil(areaPintada / (rendimento * litrosporLata));

    valorTotal = litros * valorTinta; 
    
    cout <<"\nCalculamos e voce vai precisar de " << litros << " litros e vai custar:R$" << valorTotal;

    
    return 0;

}
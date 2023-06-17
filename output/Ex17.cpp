
/*Faça um Programa para uma loja de tintas.

O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 6 metros 
quadrados e que a tinta é vendida em latas de 18 litros, que custam
R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.*/


#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int areaPintada;
    float rendeLitros = 6;
    float litrosLata = 18;
    float galao = 3.6;
    int valorLata = 80;
    int valorGalao = 25;
    float calculaRes;
    float restoTinta;


    cout << "Bem vindo ao C++ Tintas a melhor loja de tintas";
    cout << "\nInforme o tamanho da area que voce quer pintar em metros quadrados:";
    cin >> areaPintada;
   
   calculaRes = areaPintada / (rendeLitros * litrosLata);
   calculaRes = calculaRes * 1.1;

   if(restoTinta )
   cout << "o resultado é " << ceil(calculaRes);


   // Nao terminei ainda

}
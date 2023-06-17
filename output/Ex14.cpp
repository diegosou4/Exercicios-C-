/*João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o 
rendimento diário de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo 
regulamento de pesca do estado de São Paulo (50 quilos) 
deve pagar uma multa de R$ 4,00 por quilo excedente.

João precisa que você faça um programa que leia a variável peso (peso de peixes)
 e calcule o excesso.

Gravar na variável excesso a quantidade de quilos além do limite e na
variável multa o valor da multa que João deverá pagar. Imprima os
dados do programa com as mensagens adequadas.*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int multa = 4;
    float multaproporcional;
    float peso;
    float pesoadicional;

    cout << "Ola Joao por favor informe a quantidade de kilos que foi pescado hoje \n";
    cin >> peso >> fixed >> setprecision(3); 
    
    if(peso > 50){
        pesoadicional = peso - 50;
        multaproporcional = pesoadicional * multa;
        cout << "Voce tem " << pesoadicional << " kilos a mais que o permitido \n";
        cout << "A multa que deve ser paga fica no valor de R$" << multaproporcional << "\n"; 
    } else{
        cout << "Voce pescou apenas " << peso << "Kilos então não é necessario pagar multa \n";

    }




}
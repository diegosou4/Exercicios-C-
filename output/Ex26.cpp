/*
Faça um programa que pergunte o preço de três produtos e informe qual
 produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/

#include <iostream>

using namespace std;

int main(){
    int precoUm;
    int precoDois;
    int precoTres;

    cout << "Informe o preco do primeiro produto:";
    cin >> precoUm;
    cout << "Informe o preco do segundo produto";
    cin >> precoDois;
    cout << "Informeo preco do terceiro produto:";
    cin >> precoTres;
    
    int menor = precoUm;
    if(menor > precoDois){
        if(menor > precoTres){
        menor = precoTres;
        cout << "O produto mais barato é o terceiro produto custando: " << menor;
    }else{
        menor = precoDois;
        cout << "O produto mais barato é o segundo produto custando: " << menor;
    }
    } else{
         cout << "O produto mais barato é o primeiro produto custando: " << menor;
    }
  

    


    return 0;



}
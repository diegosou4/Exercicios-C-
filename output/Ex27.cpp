/*
Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/

#include <iostream>
#include <stdlib.h>

#define TAM 3


void bubble_sort(int vetor[TAM]){
     int x,y;
     
      for(x = 0;x < TAM;x++){
        for(y = x + 1;y < TAM;y++){
         if(vetor[x] > vetor[y])
            {
            int temp;
            temp = vetor[x];
            vetor[x] = vetor[y];
            vetor[y] = temp;
            };
        } ;
    } ;
};

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int vetor[3] = {};
    int i;

    cout << "Informe o primeiro numero";
    cin >> a;
    cout << "Informe o segundo numero";
    cin >> b;
    cout << "Infomre o terceiro numero";
    cin >> c;

    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
     
    bubble_sort(vetor);
    for(i = 0;i < 3;i++){
        cout << vetor[i] << ",";
    }
    
    
    return 0;
    
}
/*
Faça um programa que peça o tamanho de um arquivo para download (em MB) 
e a velocidade de um link de Internet (em Mbps), calcule e informe o 
tempo aproximado de download 
do arquivo usando este link (em minutos).*/


#include <iostream>



using namespace std;

int main(){


    int tamanhoArq;
    float minutos;
    float velicidadeInternet;
    int segundos;
    int resto;
    cout << "Informe o tamanho do arquivo:";
    cin >> tamanhoArq;
    cout << "Informe a velicade da sua internet em Mbps:";
    cin >> velicidadeInternet;

    velicidadeInternet = velicidadeInternet / 8;
    segundos = tamanhoArq / velicidadeInternet;

    minutos = segundos / 60;
    resto = segundos % 60;
    if(minutos == 0){
        cout << "Seu arquivo vai levar " << segundos << " segundos";  
    }else if(resto == 0){
        cout << "Seu arquivo vai levar " << minutos << " minutos"; 
    }else{
         cout << "Seu arquivo vai levar " << minutos << " minutos e " << resto << " segundos";  
    }
}
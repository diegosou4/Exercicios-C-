/*
Faça um programa para a leitura de duas notas parciais de um aluno. 
O programa deve calcular a média alcançada por aluno e apresentar: 
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/


#include <iostream>


using namespace std;

int main(){

    int notaUm;
    int notaDois;
    int media;
    cout << "Informe a primeira nota do Aluno:";
    cin >> notaUm;
    cout << "Informe a Segunda nota do Aluno:";
    cin >> notaDois;

    media = (notaUm + notaDois) / 2;

    if(media < 7){
        cout << "Reprovado sua media foi " << media;
    }else if(media == 10){
        cout << "Aprovado com Disticao sua media foi " << media; 
    }else{
        cout << "Aprovado sua media foi " << media;
    }

}
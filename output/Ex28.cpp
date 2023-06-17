/*
Faça um Programa que pergunte em que turno você estuda. Peça para digitar 
M-matutino ou V-Vespertino ou N- Noturno.

Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" 
ou "Valor Inválido!", conforme o caso.
*/

#include <iostream>

using namespace std;

int main(){

    char turno;
    cout << "Instruções M-matutino ou V-Vespertino ou N- Noturno";
    cout << "\nInforme qual horario voce estuda:";
    cin >> turno;

    if(turno == 'M' || turno == 'm'){
        cout << "Bom Dia";
    }else if(turno == 'V' || turno == 'V'){
        cout << "Boa Tarde";
    }else if(turno == 'N' || turno == 'n'){
        cout << "Boa Noite";
    }else{
        cout << "Horario invalido";
    }


    return 0;
}
/*
Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
*/


#include <iostream>


using namespace std;

int main(){

    char letra;

    cout << "Digite uma letra:";
    cin >> letra;
    while ((letra < 91 && letra > 64) || (letra < 123 && letra > 96))
    {
        if(letra == 'a' || letra == 'e' || letra == 'i' 
    || letra == 'o' || letra == 'u' || letra == 'A'
    || letra == 'E' || letra == 'I' || letra == 'O'
    || letra == 'U'){
        cout << "A letra digitada é vogal";
        return 0;
    }else{
        cout << "A letra é consoante";
        return 0;
    }
    }
    cout << "O caractere digitado não é uma letra";
    return 0;
}
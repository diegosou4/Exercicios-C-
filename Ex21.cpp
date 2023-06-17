/*
Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: 
F - Feminino, M - Masculino, Sexo Inválido.
*/

#include <iostream>


using namespace std;


int main(){

    char sexo;

    cout << "Informe o Sexo F - Feminino, M - Masculino:";
    cin >> sexo;
 
    if(sexo == 'M' || sexo == 'm'){
        cout << "O Sexo informado é masculino";
    }else if(sexo == 'F' || sexo == 'f'){
        cout << "O Sexo informado é feminino";
    }else{
        cout << "Sexo invalido";
    }
    
    

    return 0;
}
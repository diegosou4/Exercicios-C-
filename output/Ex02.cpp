
/*
Faça um Programa que peça um número e então mostre a mensagem O número
informado foi [número]. 
*/
#include <iostream>


using namespace std;

int main(){

    int num;

    cout << "Digite um numero: ";
    cin >> num;
    cout << "\n";
    if(num){
    cout << " O número informado foi \n" << num;
    }
    return 0;
};
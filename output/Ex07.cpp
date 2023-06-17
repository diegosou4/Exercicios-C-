/*
Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro
desta área para o usuário.
*/
#include <iostream>

using namespace std;

int dobro(int *area){
    
   *area = (*area * *area) * 2 ; 
    return *area;
}

int main(){

    int area;

    cout << "Informe o Lado do Quadrado: ";
    cin >> area;
    cout << "O dobro do quadrado é " << dobro(&area) << "\n";


    return 0;
}
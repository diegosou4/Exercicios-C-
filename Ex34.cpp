/*
Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c.

O programa deverá pedir os valores de a, b e c e fazer as consistências,
 informando ao usuário nas seguintes situações:
*/
#include<iostream>
#include <math.h>

using namespace std;

int main(){

    int a,b,c;
    int delta, xpos, xneg;
    cout << "Bem vindo a calculadora de raizes";
    cout << "Informe o valor a:";
    cin >> a;
    if(a == 0){
        cout << "Esta equação não é de segundo grau";
        return 0;
    }
    cout << "Informe o valor b:";
    cin >> b ;
    cout<< "Informe o valor de c:";
    cin >> c;

    delta = pow(b , 2) - (4 * a * c);

    if(delta < 0){
        cout << "\n A equaçao nao possui raizes reais";
        return 0;
    }else if(delta == 0){
        xpos = (-b) / (2 * a);
        cout << "\n o valor da raiz real e:" << xpos;
    }else{
        xpos = (-b + sqrt(delta)) / (2 * a);
        xneg = (-b - sqrt(delta)) / (2 * a);
        cout << "\n o valores de raizes real sao:" << xpos << " e " << xneg;
    }

    return 0;
}
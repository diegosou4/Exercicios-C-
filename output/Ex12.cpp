/*
Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, 
usando a seguinte fórmula: (72.7*altura) - 58
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float altura;
    
    float pesoideal;

    cout << "Informe sua Altura: ";
    cin >> altura;

    pesoideal = ((72.7 * altura) - 58);
    cout << fixed << setprecision(3);
    cout << "Seu peso ideial é: " << pesoideal <<  "kg \n";


    return 0;
}
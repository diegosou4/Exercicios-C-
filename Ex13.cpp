/*
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: 
Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float altura;
    int sexo = 0;
    float pesoideal;

    cout << "Informe sua Altura: ";
    cin >> altura;
    while(altura > 2 && altura <= 0){
    
        while (3 > sexo && sexo <= 0)
        {
            cout << "Informe seu sexo!! \n";
            cout << "Digite 1-Masculino ou 2-Feminino \n";
            cin >> sexo;
        }
    }


    if(sexo == 1){
           pesoideal = ((72.7 * altura) - 58);    
            cout << fixed << setprecision(3);      
            cout << "Sexo Masculino \n";
            cout << "Seu peso ideial é: " << pesoideal <<  "kg \n";
    }else{
            pesoideal = ((62.1 * altura) - 44.7);
            cout << "Sexo Feminino \n";
            cout << fixed << setprecision(3);
            cout << "Seu peso ideial é: " << pesoideal <<  "kg \n";
    }
    


 


    return 0;
}
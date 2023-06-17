/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus 
colaboradores  e lhe contrataram para desenvolver o programa que 
calculará os reajustes.

Faça um programa que recebe o salário de um colaborador e o reajuste 
segundo o seguinte critério, baseado no salário atual:
*/

#include <iostream>

using namespace std;

int main(){

    int salarioColaborador;
    int reajuste;
    int porcentagem;
    cout << "Caro colaborador informe seu salario para que possamos reajusta-lo:";
    cin >> salarioColaborador;

    if(salarioColaborador <= 280){
        porcentagem = 20;
        reajuste = (salarioColaborador / 100) * porcentagem;
        salarioColaborador = salarioColaborador + reajuste;

    }else if(salarioColaborador > 280 && salarioColaborador <= 700){
        porcentagem = 15;
        reajuste = (salarioColaborador / 100) * porcentagem;
        salarioColaborador = salarioColaborador + reajuste;
    }else if(salarioColaborador > 700 && salarioColaborador <= 1500){
        porcentagem = 10;
        reajuste = (salarioColaborador / porcentagem);
        salarioColaborador = salarioColaborador + reajuste;
        
    }else{
        porcentagem = 5;
         reajuste = (salarioColaborador / 100) * porcentagem;
        salarioColaborador = salarioColaborador + reajuste;
    }
    
    cout << "Salario antes do reajuste R$" << salarioColaborador;
    cout << "\nO percetual de aumento é de " << porcentagem << "% ";
    cout << "\nO valor do aumento é de R$" << reajuste;
    cout << "\nSeu novo salario é  R$" << salarioColaborador;
    return 0;
}
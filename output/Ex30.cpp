/*
Faça um programa para o cálculo de uma folha de pagamento, sabendo que os
descontos são do Imposto de Renda, que depende do salário bruto
(conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do
Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos.
O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas
trabalhadas no mês.

Desconto do IR:
    Salário Bruto até 900 (inclusive) - isento
    Salário Bruto até 1500 (inclusive) - desconto de 5%
    Salário Bruto até 2500 (inclusive) - desconto de 10%
    Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo.
No exemplo o valor da hora é 5 e a quantidade de hora é 220.

        Salário Bruto: (5 * 220)        : R$ 1100,00
        (-) IR (5%)                     : R$   55,00
        (-) INSS ( 10%)                 : R$  110,00
        FGTS (11%)                      : R$  121,00
        Total de descontos              : R$  165,00
        Salário Liquido                 : R$  935,00
*/

#include <iostream>

using namespace std;


int main(){
    float horaTrab, 
    irs,
    irsValor,
    inss,
    salarioLiquido,
    salarioBruto, 
    valordiv,
    fgts, 
    descontos;
    int horas;
    cout << "Digite qual valor voce recebe por hora trabalhada:";
    cin >> horaTrab;
    cout << "\nDigite quantas horas voce trabalha por mes:";
    cin >> horas;

    
    salarioLiquido =  horas * horaTrab;
    salarioBruto = salarioLiquido;
    valordiv = salarioLiquido / 100;
    if(salarioBruto > 900 && salarioBruto <= 1500){
        irs = 5;
    }else if(salarioBruto > 1500 && salarioBruto <= 2500){
        irs = 10;
    } else{
        irs = 20;
    }

    irsValor = (salarioBruto / 100) * irs;
    inss = (salarioBruto / 100)* 10;
    fgts = (salarioBruto / 100) * 11;

    descontos = salarioBruto - irsValor - inss - fgts;
    salarioLiquido = salarioLiquido - descontos;

    cout << "\nSalario bruto: R$" << salarioBruto;
    cout << "\nIRS (" << irs << "%) R$" << irsValor ;
    cout << "\nINSS (10%) R$" << inss;
    cout << "\nFGTS(11%) R$" << fgts;
    cout << "\nTotal de desconto R$" << descontos;
    cout << "\nSalario liquido R$" << salarioLiquido << "\n";

    return 0;
}
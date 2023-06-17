
/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são 
descontados  11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um 
programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato.
 o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:
*/

#include <iostream>

using namespace std;


int main(){
    float horaTrab, irs,inss, valor, valordiv,sindicado, descontos;
    int horas;
    cout << "Digite qual valor voce recebe por hora trabalhada:";
    cin >> horaTrab;
    cout << "\nDigite quantas horas voce trabalha por mes:";
    cin >> horas;

    valor =  horas * horaTrab;
    valordiv = valor / 100;
    irs = valordiv * 11;
    inss = valordiv * 8;
    sindicado = valordiv * 5;
    descontos = irs + inss + sindicado;

    cout << "\nSalario bruto: R$" << valor;
    cout << "\nIRS (11%) R$" << irs;
    cout << "\nINSS (8%) R$" << inss;
    cout << "\nSindicado (5%) R$" << sindicado;
    
    valor = valor - descontos;
    cout << "\nSalario liquido R$" << valor << "\n";
}
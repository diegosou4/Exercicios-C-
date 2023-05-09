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
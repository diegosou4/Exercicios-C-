/*
Faça um programa que lê as duas notas parciais obtidas por um aluno numa 
disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo: 
Média de Aproveitamento Conceito Entre 9.0 e 10.0 A 
Entre 7.5 e 9.0 B Entre 6.0 e 7.5 C
 Entre 4.0 e 6.0 D Entre 4.0 e zero E

O algoritmo deve mostrar na tela as notas, a média, o conceito 
correspondente e a mensagem “APROVADO” se o conceito for A, B 
ou C ou “REPROVADO” se o conceito for D ou E.
*/

#include <iostream>
#include <string>


using namespace std;
/*
    Resolvi criar com classes apenas para rever alguns conceitos,
    tenho certeza que poderia economizar linhas fazendo de outra forma


*/

class aluno {
    private:
    float notaa,notab,media;
    char conceito;
    string status;
    public:
    // Construtor
    aluno(float notaa, float notab);
    void mostraresultado();
    };

aluno::aluno(float notaa, float notab){
    this->notaa = notaa;
    this->notab = notab;
    this->media = (notaa + notab) / 2;
     if(this->media < 10 && this->media >= 9){
        this->conceito = 'A';
    }else if(this->media >= 7.5 && this->media < 9){
        this->conceito = 'B';
    }else if(this->media >= 4 && this->media < 6){
        this->conceito = 'C';
    }else{
        this->conceito = 'D';
    }
    if(this->media > 6){
        this->status = "Aprovado";
    }else{
        this->status = "Reprovado";
    }
}

void aluno::mostraresultado(){
    cout << "O status do aluno é " << this->status << endl;
    cout << "Sua media foi " << this->media << endl;
    cout << "Seu conceito foi " << this->conceito << endl;
}

int main(){


    int notaa, notab;

    cout << "Informe a primeira nota tirada pelo aluno:";
    cin >> notaa;
    while(notaa > 10 || notaa < 0){
        cout << "Nota informada é invalida" << endl;
        cout << "Informe uma nova nota:";
        cin >> notaa;
    }
    cout << "Informe a Segunda nota tirada pelo aluno:";
    cin >> notab;
        while(notab > 10 || notab < 0){
        cout << "Nota informada é invalida" << endl;
        cout << "Informe uma nova nota:";
        cin >> notab;
    }

    aluno aluno(notaa,notab);
    aluno.mostraresultado();

    return 0;
}

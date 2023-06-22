/*
Faça um Programa que peça os 3 lados de um triângulo. O programa deverá
informar se os valores podem ser um triângulo. Indique, caso os lados
formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados
for maior que o terceiro; 
Triângulo Equilátero: três lados iguais;
Triângulo Isósceles: quaisquer dois lados iguais; 
Triângulo Escaleno: três lados diferentes;
*/
#include<iostream>
#include<string>

using namespace std;

class triangulo{
    private:
    float ladoa;
    float ladob;
    float ladoc;
    string tipo;
    public:
    // Construtor
    triangulo(float ladoa,float ladob,float ladoc);
    void descobretipo();
};



triangulo::triangulo(float ladoa,float ladob,float ladoc){
    this->ladoa = ladoa;
    this->ladob = ladob;
    this->ladoc = ladoc;
}

void triangulo::descobretipo(){
    if(this->ladoa == this->ladob)
    {
        if(this->ladob == this->ladoc)
        {
            this->tipo = "Triângulo Equilátero";
        } else {
            this->tipo = "Triângulo Isósceles";
        }
    }else if(this->ladoa == this->ladoc || this->ladob == this->ladoc){
        this->tipo = "Triângulo Isósceles";
    }else{
        this->tipo = "Triângulo Escaleno";
    }
    cout << "O tipo do triangulo é "  << this->tipo << endl;

}
int main(){
    int ladoa,ladob,ladoc;

    cout << "Informe o lado a do triangulo:";
    cin >> ladoa; 
    cout << "Informe o lado a do triangulo:";
    cin >> ladob; 
    cout << "Informe o lado a do triangulo:";
    cin >> ladoc; 
    triangulo triangulo(ladoa,ladob,ladoc);
    triangulo.descobretipo();

    return 0;
}
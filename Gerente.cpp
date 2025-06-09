#include "Gerente.h"
#include <iostream>
using namespace std;

void Gerente::setBonusMensal(float bonus) {
    bonusMensal = bonus;
}

float Gerente::getBonusMensal() {
    return bonusMensal;
}

float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
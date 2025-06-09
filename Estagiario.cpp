#include "Estagiario.h"
#include <iostream>
using namespace std;

void Estagiario::setHorasTrabalhadas(int h) {
    HorasTrabalhadas = h;
}

int Estagiario::getHorasTrabalhadas() const {
    return HorasTrabalhadas;
}

float Estagiario::calcularSalarioFinal() {
    return salarioBase * (HorasTrabalhadas / 160.0f);
}

void Estagiario::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << HorasTrabalhadas << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}

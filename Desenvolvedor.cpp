#include "Desenvolvedor.h"
#include <iostream>
using namespace std;

void Desenvolvedor::setQuantidadeDeProjetos(int q) {
    quantidadeDeProjetos = q;
}

int Desenvolvedor::getQuantidadeDeProjetos() const {
    return quantidadeDeProjetos;
}

float Desenvolvedor::calcularSalarioFinal() {
    return salarioBase + (500 * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Quantidade de Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário Final: R$ " << calcularSalarioFinal() << endl;
}

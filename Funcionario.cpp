#include "Funcionario.h"
#include <iostream>
using namespace std;

void Funcionario::setNome(string novoNome) {
    nome = novoNome;
}

string Funcionario::getNome() {
    return nome;
}

void Funcionario::setSalarioBase(float novoSalario) {
    salarioBase = novoSalario;
}

float Funcionario::getSalarioBase() {
    return salarioBase;
}

void Funcionario::setId(int novoId) {
    id = novoId;
}

int Funcionario::getId() {
    return id;
}

void Funcionario::exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << salarioBase << endl;
}
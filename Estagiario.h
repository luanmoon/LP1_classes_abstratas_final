#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "Funcionario.h"
class Estagiario : public Funcionario {
private:
    int HorasTrabalhadas;

public:
    void setHorasTrabalhadas(int h);
    int getHorasTrabalhadas() const;

    float calcularSalarioFinal() override;
   void exibirInformacoes() override;
};

#endif 
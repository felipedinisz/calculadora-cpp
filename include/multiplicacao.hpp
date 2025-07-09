#include "operacoes.hpp"

#ifndef MULTIPLICACAO_H
#define MULTIPLICACAO_H

class Multiplicacao : public IOPeracoes {
    virtual double Calcular(double n1, double n2) const override;
};

#endif // MULTIPLICACAO
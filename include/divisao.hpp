#include "operacoes.hpp"

#ifndef DIVISAO_H
#define DIVISAO_H

class Divisao : public IOPeracoes {
    virtual double Calcular(double n1, double n2) const override;
};

#endif // DIVISAO
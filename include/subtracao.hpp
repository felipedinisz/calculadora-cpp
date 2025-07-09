#include "operacoes.hpp"

#ifndef SUBTRACAO_H
#define SUBTRACAO_H

class Subtracao: public IOPeracoes {
    virtual double Calcular(double n1, double n2) const override;
};

#endif // Subtracao
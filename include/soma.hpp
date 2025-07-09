#include "operacoes.hpp"

#ifndef SOMA_H
#define SOMA_H

class Soma: public IOPeracoes {
    virtual double Calcular(double n1, double n2) const override;
};

#endif // SOMA
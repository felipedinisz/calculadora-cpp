#include "../include/divisao.hpp"
#include <iostream>

double Divisao::Calcular(double num, double den) const {
    if(den == 0) {
        throw std::runtime_error("Divisão por zero!");
    }

    return num / den;
}
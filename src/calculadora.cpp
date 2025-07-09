#include "../include/calculadora.hpp"
#include "../include/operacoes.hpp"

double Calculadora::Executar(double n1, double n2, IOPeracoes& operacao) const {
    return operacao.Calcular(n1, n2);
}
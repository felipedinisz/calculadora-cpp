#include "../include/calculadora.hpp"
#include "../include/operacoes.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

double Calculadora::Executar(double n1, double n2, IOPeracoes& operacao) const {
    return operacao.Calcular(n1, n2);
}

void Calculadora::MostrarHoras(){
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime_t = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime_t);
    std::cout << "Horário Atual: " << std::put_time(localTime, "%d-%m-%Y %H:%M:%S") << std::endl;
}
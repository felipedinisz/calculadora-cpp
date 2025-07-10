#include "../include/calculadora.hpp"
#include "../include/soma.hpp"
#include "../include/subtracao.hpp"
#include "../include/multiplicacao.hpp"
#include "../include/divisao.hpp"


#include <iostream>

void formatador();
void espacoembranco();
void iterador(char item);

int main () {
    Calculadora calc;
    Soma opSoma;
    Subtracao opSub;
    Multiplicacao opMult;
    Divisao opDiv;
    double num1, num2, resultado;


    std::cout << "Bem-vindo, o que faremos hoje?" << std::endl;

    while(true) {

        espacoembranco();
        formatador();
        std::cout << "0- Sair" << std::endl;
        std::cout << "1- Somar" << std::endl;
        std::cout << "2- Subtrair" << std::endl;
        std::cout << "3- Multiplicar" << std::endl;
        std::cout << "4- Dividir" << std::endl;
        std::cout << "5- Mostrar horário atual" << std::endl;
        formatador();

        int escolha;
        std::cout << "Opção: ";
        std::cin >> escolha;
        
        if (escolha == 0) { 
            std::cout << "Saindo..." << std::endl;
            break; 
        }

        if (escolha > 5 || escolha < 0) {
            std::cout << "Opção Inválida" << std::endl;
            continue;
        } else if (escolha == 5) {
            espacoembranco();
            calc.MostrarHoras();
            continue;
        }

        std::cout << "Entre o primeiro número: ";
        std::cin >> num1;

        std::cout << "Entre o segundo número: ";
        std::cin >> num2;



        switch (escolha)
        {
        case 1:
            resultado = calc.Executar(num1, num2, opSoma);
            espacoembranco();
            std::cout << "O Resultado da soma é: " << resultado << std::endl; 
            break;
        case 2:
            resultado = calc.Executar(num1, num2, opSub);
            espacoembranco();
            std::cout << "O Resultado da subtração é: " << resultado << std::endl; 
            break;
        case 3:
            resultado = calc.Executar(num1, num2, opMult);
            espacoembranco();
            std::cout << "O Resultado da multiplicação é: " << resultado << std::endl; 
            break;
        case 4:
            try{
                resultado = calc.Executar(num1, num2, opDiv);
                espacoembranco();
                std::cout << "O Resultado da divisão é: " << resultado << std::endl; 
            } catch (const std::runtime_error& e) {
                std::cerr << "Erro: " << e.what() << std::endl;
            }
            break;
        }
    }
    return 0;
}

void formatador() {
    iterador('=');
}

void espacoembranco() {
    iterador(' ');
}

void iterador(char item) {
     int tam = 20;
    for (int i = 0; i < tam; i++) {
        std::cout << item;
    }
    std::cout << std::endl;
}
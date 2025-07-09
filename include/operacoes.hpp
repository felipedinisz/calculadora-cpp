#ifndef OPERACOES_H
#define OPERACOES_H

class IOPeracoes { 
    public:
        virtual ~IOPeracoes() = default;
        virtual double Calcular(double n1, double n2) const = 0;   
};

#endif // OPERACOES
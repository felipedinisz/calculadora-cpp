#ifndef OPERACOES_H
#define OPERACOES_H

class IOPeracoes {
    protected:
        virtual double Calcular(double n1, double n2) const = 0;
    
    public:
        virtual ~IOPeracoes() = default;
};

#endif // OPERACOES
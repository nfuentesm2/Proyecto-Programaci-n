#ifndef CABALLERIA_H
#define CABALLERIA_H

#include "UnidadMilitar.h"

class Caballeria : public UnidadMilitar {
private:
    float bonoCarga;

public:
    Caballeria();
    explicit Caballeria(int cantidad);

    float calcularAtaque() const override;
    float calcularDefensa() const override;
};

#endif // CABALLERIA_H

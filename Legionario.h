#ifndef LEGIONARIO_H
#define LEGIONARIO_H

#include "UnidadMilitar.h"

class Legionario : public UnidadMilitar {
private:
    float bonoFormacionCerrada;

public:
    Legionario();
    explicit Legionario(int cantidad);

    float calcularAtaque() const override;
    float calcularDefensa() const override;
};

#endif // LEGIONARIO_H

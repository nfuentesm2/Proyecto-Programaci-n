#ifndef ESCLAVO_H
#define ESCLAVO_H

#include "UnidadMilitar.h"

class Esclavo : public UnidadMilitar {
private:
    float reduccionCosto;

public:
    Esclavo();
    explicit Esclavo(int cantidad);

    float calcularAtaque() const override;
    float calcularDefensa() const override;

    float calcularMantenimiento() const;
};

#endif // ESCLAVO_H

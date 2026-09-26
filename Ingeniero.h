#ifndef INGENIERO_H
#define INGENIERO_H

#include "UnidadMilitar.h"

class Ingeniero : public UnidadMilitar {
private:
    float bonoDefensaGlobal;

public:
    Ingeniero();
    explicit Ingeniero(int cantidad);

    float calcularAtaque() const override;
    float calcularDefensa() const override;

    float getBonoDefensaGlobal() const;
};

#endif // INGENIERO_H

#ifndef BALLESTA_H
#define BALLESTA_H

#include "UnidadMilitar.h"

class Ballesta : public UnidadMilitar {
private:
    int alcance;
    bool sinContragolpe;

public:
    Ballesta();
    explicit Ballesta(int cantidad);

    float calcularAtaque() const override;
    float calcularDefensa() const override;
};

#endif // BALLESTA_H

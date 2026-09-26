#include "Ingeniero.h"

// ATK base 5, DEF base 20, costo 10. Bono +10% defensa global.
Ingeniero::Ingeniero() : UnidadMilitar(0, 5.0f, 20.0f, 10), bonoDefensaGlobal(0.10f) {}

Ingeniero::Ingeniero(int cantidad) : UnidadMilitar(cantidad, 5.0f, 20.0f, 10), bonoDefensaGlobal(0.10f) {}

float Ingeniero::calcularAtaque() const {
    return getCantidadVivos() * atk;
}

float Ingeniero::calcularDefensa() const {
    return getCantidadVivos() * def;
}

float Ingeniero::getBonoDefensaGlobal() const {
    return bonoDefensaGlobal;
}

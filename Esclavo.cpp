#include "Esclavo.h"

// ATK base 2, DEF base 5, costo 1. Reduce mantenimiento de la legion 15%.
Esclavo::Esclavo() : UnidadMilitar(0, 2.0f, 5.0f, 1), reduccionCosto(0.15f) {}

Esclavo::Esclavo(int cantidad) : UnidadMilitar(cantidad, 2.0f, 5.0f, 1), reduccionCosto(0.15f) {}

float Esclavo::calcularAtaque() const {
    return getCantidadVivos() * atk;
}

float Esclavo::calcularDefensa() const {
    return getCantidadVivos() * def;
}

float Esclavo::calcularMantenimiento() const {
    return getCosto() * (1.0f - reduccionCosto);
}

#include "Legionario.h"

// ATK base 25, DEF base 35, costo 5 (segun ficha del proyecto)
Legionario::Legionario() : UnidadMilitar(0, 25.0f, 35.0f, 5), bonoFormacionCerrada(1.0f) {}

Legionario::Legionario(int cantidad) : UnidadMilitar(cantidad, 25.0f, 35.0f, 5), bonoFormacionCerrada(1.35f) {}

float Legionario::calcularAtaque() const {
    return getCantidadVivos() * atk;
}

float Legionario::calcularDefensa() const {
    // Absorbe daño preferencial en formaciones cerradas
    return getCantidadVivos() * def * bonoFormacionCerrada;
}

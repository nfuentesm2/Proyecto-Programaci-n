#include "Caballeria.h"

// ATK base 45, DEF base 15, costo 12
Caballeria::Caballeria() : UnidadMilitar(0, 45.0f, 15.0f, 12), bonoCarga(1.0f) {}

Caballeria::Caballeria(int cantidad) : UnidadMilitar(cantidad, 45.0f, 15.0f, 12), bonoCarga(1.5f) {}

float Caballeria::calcularAtaque() const {
    // Fuerza de choque: inflige dano de carga concentrado
    return getCantidadVivos() * atk * bonoCarga;
}

float Caballeria::calcularDefensa() const {
    return getCantidadVivos() * def;
}

#include "Ballesta.h"

// ATK base 60, DEF base 5, costo 20
Ballesta::Ballesta() : UnidadMilitar(0, 60.0f, 5.0f, 20), alcance(100), sinContragolpe(true) {}

Ballesta::Ballesta(int cantidad) : UnidadMilitar(cantidad, 60.0f, 5.0f, 20), alcance(100), sinContragolpe(true) {}

float Ballesta::calcularAtaque() const {
    // Ataca sin sufrir contragolpe en linea
    return getCantidadVivos() * atk;
}

float Ballesta::calcularDefensa() const {
    return getCantidadVivos() * def;
}

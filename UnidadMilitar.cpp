#include "UnidadMilitar.h"
#include <algorithm>

UnidadMilitar::UnidadMilitar() : atk(0.0f), def(0.0f), cantidadViva(0), costo(0) {}

UnidadMilitar::UnidadMilitar(int cantidadViva, float atk, float def, int costo)
    : atk(atk), def(def), cantidadViva(cantidadViva), costo(costo) {}

void UnidadMilitar::aplicarBajas(int cantidad) {
    cantidadViva = std::max(0, cantidadViva - cantidad);
}

bool UnidadMilitar::estaActiva() const {
    return cantidadViva > 0;
}

int UnidadMilitar::getCantidadVivos() const {
    return cantidadViva;
}

int UnidadMilitar::getCosto() const {
    return costo;
}

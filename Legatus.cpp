#include "Legatus.h"
#include <iostream>

Legatus::Legatus() : Persona(), legionAsignada(nullptr), experiencia(0) {}

Legatus::Legatus(const std::string& nombre, int id, Legion* legion, int experiencia)
    : Persona(nombre, id, "Legatus"), legionAsignada(legion), experiencia(experiencia) {}

void Legatus::mostrarInfo() const {
    std::cout << "Legatus: " << getNombre()
              << " | Experiencia: " << experiencia << std::endl;
}

void Legatus::asignarLegion(Legion* legion) {
    legionAsignada = legion;
}

int Legatus::getExperiencia() const {
    return experiencia;
}

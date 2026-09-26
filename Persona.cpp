#include "Persona.h"

// Constructor por defecto
Persona::Persona() : nombre("Sin nombre"), id(0), rango("Sin rango") {}

// Constructor parametrizado (sobrecarga)
Persona::Persona(const std::string& nombre, int id, const std::string& rango)
    : nombre(nombre), id(id), rango(rango) {}

std::string Persona::getNombre() const {
    return nombre;
}

int Persona::getId() const {
    return id;
}

std::string Persona::getRango() const {
    return rango;
}

void Persona::setRango(const std::string& nuevoRango) {
    rango = nuevoRango;
}

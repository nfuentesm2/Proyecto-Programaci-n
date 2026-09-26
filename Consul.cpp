#include "Consul.h"
#include <iostream>

Consul::Consul() : Persona(), campaniaActual("Sin campania"), bonoLiderazgo(0.0f) {}

Consul::Consul(const std::string& nombre, int id, const std::string& campania, float bono)
    : Persona(nombre, id, "Consul"), campaniaActual(campania), bonoLiderazgo(bono) {}

void Consul::mostrarInfo() const {
    std::cout << "Consul: " << getNombre()
              << " | Campania: " << campaniaActual
              << " | Bono liderazgo: " << bonoLiderazgo << std::endl;
}

void Consul::ordenarAtaque(Legion& legion) {
    // TODO: cuando Legion.h este completo, esta funcion debe:
    // 1) aplicar bonoLiderazgo a la legion recibida
    // 2) invocar el turno de combate correspondiente
    (void)legion; // evita warning de parametro sin usar por ahora
    std::cout << getNombre() << " ordena el ataque." << std::endl;
}

float Consul::getBonoLiderazgo() const {
    return bonoLiderazgo;
}

std::string Consul::getCampania() const {
    return campaniaActual;
}

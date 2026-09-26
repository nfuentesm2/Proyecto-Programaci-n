#include <iostream>
#include <list>
#include "Consul.h"
#include "Legatus.h"
#include "Legionario.h"
#include "Caballeria.h"
#include "Ballesta.h"
#include "Ingeniero.h"
#include "Esclavo.h"

int main() {
    std::cout << "=== Prueba jerarquia de mando (herencia) ===" << std::endl;
    Consul cesar("Julio Cesar", 1, "Guerra Civil", 1.2f);
    Legatus legatoA("Marco Antonio", 2, nullptr, 8);
    cesar.mostrarInfo();
    legatoA.mostrarInfo();

    std::cout << "\n=== Prueba jerarquia militar (polimorfismo) ===" << std::endl;
    // Lista de punteros a la clase base: esto es polimorfismo en accion.
    std::list<UnidadMilitar*> tropas;
    tropas.push_back(new Legionario(100));
    tropas.push_back(new Caballeria(30));
    tropas.push_back(new Ballesta(20));
    tropas.push_back(new Ingeniero(10));
    tropas.push_back(new Esclavo(15));

    for (UnidadMilitar* u : tropas) {
        // Aunque el tipo declarado es UnidadMilitar*, cada llamada ejecuta
        // la version de calcularAtaque() de la subclase real.
        std::cout << "Ataque: " << u->calcularAtaque()
                  << " | Defensa: " << u->calcularDefensa()
                  << " | Vivos: " << u->getCantidadVivos() << std::endl;
    }

    // Liberar memoria
    for (UnidadMilitar* u : tropas) {
        delete u;
    }

    return 0;
}

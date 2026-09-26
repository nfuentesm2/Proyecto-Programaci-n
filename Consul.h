#ifndef CONSUL_H
#define CONSUL_H

#include "Persona.h"

// Declaracion adelantada: Consul solo necesita saber que Legion existe,
// no necesita ver su contenido completo todavia (evita dependencia circular).
class Legion;

class Consul : public Persona {
private:
    std::string campaniaActual;
    float bonoLiderazgo;

public:
    Consul();
    Consul(const std::string& nombre, int id, const std::string& campania, float bono);

    void mostrarInfo() const override;

    void ordenarAtaque(Legion& legion);
    float getBonoLiderazgo() const;
    std::string getCampania() const;
};

#endif // CONSUL_H

#ifndef LEGATUS_H
#define LEGATUS_H

#include "Persona.h"

class Legion; // declaracion adelantada, igual que en Consul

class Legatus : public Persona {
private:
    Legion* legionAsignada;
    int experiencia;

public:
    Legatus();
    Legatus(const std::string& nombre, int id, Legion* legion, int experiencia);

    void mostrarInfo() const override;

    void asignarLegion(Legion* legion);
    int getExperiencia() const;
};

#endif // LEGATUS_H

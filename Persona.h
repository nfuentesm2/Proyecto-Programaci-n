#ifndef PERSONA_H
#define PERSONA_H

#include <string>

// Clase base abstracta de la jerarquia de mando.
// No se puede instanciar directamente (tiene un metodo virtual puro).
class Persona {
private:
    std::string nombre;
    int id;
    std::string rango;

public:
    Persona();
    Persona(const std::string& nombre, int id, const std::string& rango);
    virtual ~Persona() = default;

    // Metodo virtual puro: cada clase derivada decide como mostrar su info.
    virtual void mostrarInfo() const = 0;

    std::string getNombre() const;
    int getId() const;
    std::string getRango() const;
    void setRango(const std::string& rango);
};

#endif // PERSONA_H

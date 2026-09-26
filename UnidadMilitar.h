#ifndef UNIDADMILITAR_H
#define UNIDADMILITAR_H

// Clase base abstracta de toda tropa del ejercito.
// atk y def son "protected" porque las subclases los necesitan
// directamente para aplicar sus bonos especificos en calcularAtaque/Defensa.
class UnidadMilitar {
protected:
    float atk;
    float def;

private:
    int cantidadViva;
    int costo;

public:
    UnidadMilitar();
    UnidadMilitar(int cantidadViva, float atk, float def, int costo);
    virtual ~UnidadMilitar() = default;

    // Metodos virtuales puros: cada tropa calcula su propio ataque/defensa
    virtual float calcularAtaque() const = 0;
    virtual float calcularDefensa() const = 0;

    void aplicarBajas(int cantidad);
    bool estaActiva() const;

    int getCantidadVivos() const;
    int getCosto() const;
};

#endif // UNIDADMILITAR_H

#include <iostream>
#include <string>
class Mamifero {
public:
    virtual void amamantar() = 0; 
    virtual ~Mamifero() {}
};
class AnimalOviparo {
public:
    virtual void ponerHuevo() = 0;
    virtual ~AnimalOviparo() {}
};

class AnimalAcuatico {
public:
    virtual void nadar() = 0;
    virtual ~AnimalAcuatico() {}
};
class Ornitorrinco : public Mamifero, public AnimalOviparo, public AnimalAcuatico {
public:
    void amamantar() override {
        std::cout << "El ornitorrinco esta amamantando a sus crias." << std::endl;
    }

    void ponerHuevo() override {
        std::cout << "El ornitorrinco ha puesto un huevo." << std::endl;
    }

    void nadar() override {
        std::cout << "El ornitorrinco nada usando su cola y patas palmeadas." << std::endl;
    }
};
int main() {
    Ornitorrinco perry;
    std::cout << "Habilidades del ornitorrinco" << std::endl;
    perry.amamantar();
    perry.ponerHuevo();
    perry.nadar();
    return 0;
}
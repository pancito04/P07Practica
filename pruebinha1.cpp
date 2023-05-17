#include <iostream>
using namespace std;
class Figura {
    protected:
        double ancho;
        double altura;
    public:
        void setMedidas(double w, double h) {
        ancho = w;
        altura = h;
        }
};
class Triangulo : public Figura {
    public:
        double obtenerArea() {
        return (ancho * altura) / 2;
        }
};
class Cuadrado : public Figura {
    public:
    double obtenerArea() {
        return ancho * altura;
    }
};
int main() {
    Triangulo t;
    Cuadrado c;
    t.setMedidas(5, 3);
    c.setMedidas(4, 4);
    cout << "El area del triangulo es: " << t.obtenerArea() << endl;
    cout << "El area del cuadrado es: " << c.obtenerArea() << endl;
    return 0;
}

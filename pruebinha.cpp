#include<iostream>
#include<string>
using namespace std;
class Vehiculo {
    protected:
        int ruedas;
    public:
        Vehiculo(int n_ruedas) {
        ruedas = n_ruedas;
        }
        void info() {
        cout << "Este vehículo tiene " << ruedas << " ruedas." << endl;
        }
};
// Definición de la clase derivada
class Automovil : protected Vehiculo {
    private:
        int puertas;
    public:
        Automovil(int n_ruedas, int n_puertas) : Vehiculo(n_ruedas) {
        puertas = n_puertas;
        }
        void info() {
        cout << "Este automóvil tiene " << ruedas << " ruedas." << endl;
        //se podra acceder a los miembros protected de vehiculo desde automovil?
        cout << "Este automóvil tiene " << Vehiculo::ruedas << " ruedas." <<endl;
        cout << "Este automovil tiene " << puertas << " puertas."<<endl;
        }
};

int main(){
    // Creación de un objeto de la clase derivada
    Automovil a(4, 2);
    a.info();
    // Se imprime 2 veces y de la misma manera, ya que al solo invocar "ruedas" es como acceder al atributo
    // "heredado" de Vehiculo, "Vehiculo::ruedas" llama directamente al atributo de "Vehiculo"
    //cout<<a.puertas; <- no se puede acceder desde otra parte del codigo
    return 0;
}
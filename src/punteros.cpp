#include <iostream>
#include <string>
#include <list>
using namespace std;

class Humano {
    private:
        string nombre;
        int edad;
    public: 
    string LeerNombre();
    int LeerEdad();

}

class Alumno :public Humano{
    private:
    int LeerRegistro();
    public:
    int registro;
    
};

class Empleado :public Humano{
    private:
    int noEmpleado;
    public:
    long LeerNumeroEmpleado();
}

int main(int arg, char const *argv[]){
    Humano* humano = NULL;
    Alumno* alumno = new Alumno;
    Empleado* empleado = new Empleado;
    
    humano = alumno;
    humano->LeerEdad();

    humano = empleado;
    humano->LeerEdad();
 
    list<Humano*> ListaHumanos;
    ListaHumanos.emplace_back(new Alumno);
    ListaHumanos.emplace_back(new Alumno);
    ListaHumanos.emplace_back(new Alumno);
    ListaHumanos.emplace_back(new Alumno);
    ListaHumanos.emplace_back(new Empleado);
    ListaHumanos.emplace_back(new Empleado);
    ListaHumanos.emplace_back(new Empleado);
    ListaHumanos.emplace_back(new Empleado);

    for (auto && humano : ListaHumanos)
    {
        cout << humano->LeerNombre() <<endl;
    }
    

}
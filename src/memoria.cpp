#include <iostream>
#include <list>
using namespace std;

class persona{
    public:
    char nombre[10];
    int edad;
};

class empleado : public persona{
    public:
    int noEmpleado;
};

class alumno :public persona{
    public:
    int registro;
};

int main(int arg, char const *argv[])
{   cout << "tamaño de los tipos de datos" << endl;
    cout << "tamaño int    " << sizeof(int) << endl;
    cout << "tamaño long   " << sizeof(long) << endl;
    cout << "tamaño float  " << sizeof(float) << endl;
    cout << "tamaño double " << sizeof(double) << endl;
    cout << "tamaño bool   " << sizeof(bool) << endl;
    cout << "tamaño char   " << sizeof(char) << endl;
    cout << "tamaño byte   " << sizeof(byte) << endl;

    cout << "direcciones de memoria" << endl;
    cout << "punteros en C   " << malloc(sizeof(int)) << endl;
    cout << "punteros en C++ " << new int << endl;

    cout << "tamaño punteros" << endl;
    cout << "int*  " << sizeof(int*) << endl;
    cout << "char* " << sizeof(int*) << endl;

    cout << "casteo de tipos" << endl;
    ///casteo de punteros
    int* puntero = (int*)malloc(sizeof( int));
    
    ///casteo de variables
    int ejemplo = 65;
    char letra= (char)ejemplo;
    cout << "letra "<< letra << endl;

    ///polimorfismo
    persona* Persona = new empleado();
    persona* Persona2 = new alumno();
    
    list<persona*> Personas;
    Personas.emplace_back(Persona);
    Personas.emplace_back(Persona2);
    
    cout << (*Persona).edad << endl;
    cout << (*Persona).nombre << endl;
    cout << (*Persona).noEmpleado << endl;
    cout << Persona->edad << endl;
    cout << Persona->nombre << endl;
    cout << Persona->noEmpleado << endl;

    for(auto &&p : Persona)
    {
        cout << Persona->nombre << endl;
        cout << Persona->edad << endl;
    }

    return 0;
}
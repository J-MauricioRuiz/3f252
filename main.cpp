#include<iostream>
#include<Foco.hpp>
/*c++ main.cpp -o programa -I.
  ./programa
*/
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"hola mundo"<<endl;
    Foco foco;
    foco.Encender();
    cout<<"Estado Foco: "<< foco.LeerEstado()<<endl;
    return 0;
}

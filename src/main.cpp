#include <iostream>
#include <Foco.hpp>
using namespace std;

/*c++ main.cpp -o programa -I.
  ./programa
  c++ src/main.cpp -o programa -Iinclude
*/

int main(int argc, char const *argv[])
{
  Foco foco;
  foco.Encender();
  cout << "Estado Foco: " << foco.LeerEstado() << endl;
  return 0;
}

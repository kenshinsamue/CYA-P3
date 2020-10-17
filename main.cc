#include "palindrome_prod.h"
using namespace std;
int main(int arcg, char *argv[]) {
  if (arcg == 3) {
    string numero = argv[1];
    PalindromeProd capicuos(stoi(numero), argv[2]);
  } else {
    cout << "Error no se ha usado el programa correctamente:" << endl;
    cout << "./palindrome_prod [numero n ][nombre de fichero de salida]"
         << endl;
  }
}

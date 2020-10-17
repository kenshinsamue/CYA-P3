#include "palindrome_prod.h"

PalindromeProd::PalindromeProd() {}
PalindromeProd::PalindromeProd(int n, char* fichero) {
  if (n > 0) {
    N = n;
    Output = fstream(fichero, fstream::out);
    PrimerNumero = CrearNumero(N);
    UltimoNumero = CrearNumero(N + 1);
    UltimoNumero--;
    CrearProductos();
  } else {
    cout << "ERROR el numero facilitado tiene que ser mayor que 0" << endl;
  }
}
void PalindromeProd::CrearProductos() {
  for (int i = PrimerNumero; i <= UltimoNumero; i++) {
    for (int j = PrimerNumero; j <= UltimoNumero; j++) {
      if (IsPalondrome(i * j) == true) {
        int r = (i * j);
        Operacion capicua(i, j, r);
        ListaOperaciones.insert(capicua);
      }
    }
  }
  EscribirFichero();
}
void PalindromeProd::EscribirFichero() {
  for (auto i : ListaOperaciones) {
    Output << i.getMultiplo1() << " x " << i.getMultiplo2() << " = "
           << i.getCapicua() << endl;
  }
}
int PalindromeProd::CrearNumero(int size) {
  string r = "1";
  size--;
  while (size > 0) {
    r = r + "0";
    size--;
  }
  return stoi(r);
}
bool PalindromeProd::IsPalondrome(int V) {
  string numero = to_string(V);
  bool resultado = true;
  while (numero.size() > 1 && resultado == true) {
    if (numero[0] != numero[numero.size() - 1]) {
      resultado = false;
    }
    numero.erase(0, 1);
    numero.erase(numero.size() - 1, 1);
  }
  return resultado;
}
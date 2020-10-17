
#include <iostream>
#include <string>
#include <fstream>
#include <set>
#include "operacion.h"
#ifndef PALINDROME_PROD_H
#define PALINDROME_PROD_H
using namespace std;
class PalindromeProd {
 public:
  PalindromeProd();
  PalindromeProd(int, char*);
  int CrearNumero(int);
  bool IsPalondrome(int);
  void CrearProductos();
  void EscribirFichero();
  
 private:
  int N;
  int PrimerNumero;
  int UltimoNumero;
  set<Operacion> ListaOperaciones;
  fstream Output;


};
#endif
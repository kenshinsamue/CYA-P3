#include "operacion.h"

Operacion::Operacion() {
  m1 = 0;
  m2 = 0;
  capicua = 0;
}
Operacion::Operacion(int multiplo1, int multiplo2, int resultado) {
  m1 = multiplo1;
  m2 = multiplo2;
  capicua = resultado;
}
void Operacion::setMultiplos(int multiplo1, int multiplo2) {
  m1 = multiplo1;
  m2 = multiplo2;
}
void Operacion::setCapicua(int resultado) { capicua = resultado; }
int Operacion::getMultiplo1() { return m1; }
int Operacion::getMultiplo2() { return m2; }
int Operacion::getCapicua() { return capicua; }

bool operator<(const Operacion &a, const Operacion &b) {
  if(a.capicua <= b.capicua){
    if (a.m1 == b.m1 && a.m2 == b.m2) {
      return false;
    }
    if (a.m1 == b.m2 && a.m2 == b.m1) {
      return false;
    } 
    return true;
  }
  else{return false;}
}
bool operator==(const Operacion &a, const Operacion &b) {
   if (a.capicua != b.capicua) {
     return false;
   } else {
    if (a.m1 == b.m1 && a.m2 == b.m2) {
      return true;
    } else {
      if (a.m1 == b.m2 && a.m2 == b.m1) {
        return true;
      } else {
        return false;
      }
    }
  }
}
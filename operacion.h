#ifndef OPERACION_H
#define OPERACION_H
class Operacion {
 public:
  Operacion();
  Operacion(int, int, int);
  void setMultiplos(int, int);
  void setCapicua(int);
  int getMultiplo1();
  int getMultiplo2();
  int getCapicua();
  friend bool operator<(const Operacion&, const Operacion&);
  friend bool operator==(const Operacion&, const Operacion&);
  
 private:
  int m1;
  int m2;
  int capicua;


};
#endif

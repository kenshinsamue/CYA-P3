#ifndef OPERACION_H
#define OPERACION_H

/** Alumno: Enrique Manuel Pedroza Castillo
    Alu: alu0100886351
    Clase: Operacion
    Esta clase describe a un objeto contiene a la operacion cuyo resultado es un numero capicuo
*/
class Operacion {
 public:
  Operacion();                        // constructor por defecto
  Operacion(int, int, int);           // constructor parametrizado con los atributos de los multiplos y el numero resultante capicuo
  void setMultiplos(int, int);        // setter de los multiplos 
  void setCapicua(int);               // setter del numero resultante capicuo
  int getMultiplo1();                 // getter del primer multiplo
  int getMultiplo2();                 // getter del segundo multiplo
  int getCapicua();                   // getter del numero resultado capicuo
  friend bool operator<(const Operacion&, const Operacion&);    // operador <
  friend bool operator==(const Operacion&, const Operacion&);   // operador ==
  
 private:
  int m1;
  int m2;
  int capicua;
};
#endif

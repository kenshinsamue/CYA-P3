
#include <iostream>
#include <string>
#include <fstream>
#include <set>
#include "operacion.h"

/** Alumno: Enrique Manuel Pedroza Castillo
    Alu: alu0100886351
    Clase: PalindromeProd
    Esta clase describe a un objeto que recibe un numero entero 'n' y un fichero de salida
    su finalidad es escribir en el fichero aquellos numeros palindromos que se obtengan
    del resultado de multiplicar dos numeros naturales con longitud de 'n' digitos
*/

#ifndef PALINDROME_PROD_H
#define PALINDROME_PROD_H
using namespace std;
class PalindromeProd {
 public:
  PalindromeProd();   // Constructor por defecto
  PalindromeProd(int, char*); // Constructor por parametros que recibe el numero n y el fichero de salida
  int CrearNumero(int);     // metodo que recibe un numero 'n' y devuelva el primer numero que contenga longitud 'n'
  bool IsPalondrome(int);   // metodo que recibe un numero y nos devuelve un booleano que nos indicara si es palindromo (true) o no (false)
  void CrearProductos();    // metodo que realiza los productos y encuentra los productos que resultan en numeros palindromos
  void EscribirFichero();   // metodo que escribira las multiplicaciones que resultan en palindromos dentro del fichero especificado
  
 private:
  int N;                      // N es el numero natural que define la longitud de los multiplicandos
  int PrimerNumero;           // es el primer numero dentro del rango 
  int UltimoNumero;           // ultimo numero del rango 
  set<Operacion> ListaOperaciones;    // set que contiene las operaciones cuyo resultado es un numero capicuo
  fstream Output;             // stream hacia el fichero de salida


};
#endif
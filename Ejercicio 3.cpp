/* 
Programa:          3 - Operadores.cpp 
Programador:       Dylan Aaron Peñate Pérez
Carnet:            3590-22-3431
Descripcion:       Programa demostrativo de C++, contiene la presentación inicial del lenguaje C++. 
Fecha de creación: 09/02/2023
*/ 
 

#include <iostream>  
#include "conio.h" 
#include <iomanip> 
using namespace std;

string strTexto = ""; 
int intEspacios = 0; 
int intLargoTexto = 0; 
const int intAnchoPantalla = 80; 
int i = 0; 
 
int main() { 
     
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; 
  while(i < intAnchoPantalla)  
  { 
          cout << "*"; 
          i = i + 1; 
  }   
   
  i = 0; 
  while(i < intAnchoPantalla) 
  { 
          if(i == 0 || i == (intAnchoPantalla - 1)) 
               cout<<"*"; 
          else 
              cout<<" "; 
          i++; 
  } 
           
  strTexto = "UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "5990 - INGENIERIA  EN SISTEMAS DE INFORMACION Y CIENCIAS DE LA COMPUTACION"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "SEDE LA FLORIDA"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "PLAN FIN DE SEMANA"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
       
  strTexto = "008 - ALGORITMOS"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "ING. JOHNY ALEXANDER CORDON ESCALANTE"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
   
  strTexto = "E L   L E N G U A J E  C + +"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "O P E R A D O R E S  Y  E X P R E S I O N E S"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";   
   
  i = 0; 
  while(i < intAnchoPantalla) 
  { 
          if(i == 0 || i == (intAnchoPantalla - 1)) 
               cout<<"*"; 
          else 
              cout<<" "; 
          i = i + 1; 
  } 
   
  i = 0; 
  while(i < intAnchoPantalla) 
  { 
          cout << "*"; 
          i++; 
  } 
   
  cout <<"\n\n\nATENCION: MAXIMICE ESTA VENTANA Y FIJE LA BARRA DE DESPLAZAMIENTO HASTA ARRIBA PARA UNA MEJOR EXPERIENCIA... Presione " 
  <<"la tecla Enter cuando este listo..." 
  ; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();   
  system("CLS()");  
   
  cout<<"\n\n"; 
   
  i = 0; 
  while(i < intAnchoPantalla) { 
          cout << "*"; 
          i = i + 1; 
  } 
     
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "INTRODUCCION"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
    
   i = 0; 
  while(i < intAnchoPantalla)  
  { 
          cout << "*"; 
          i++; 
  } 
   
  cout <<"\n\n\tLos operadores son símbolos que permiten definir operaciones entre distintos operandos, Los operadores fundamentales son (a = 10, b = 15):\n\n\n" 
  <<"\t1. Operadores de asignacion: a = b, a += b, a -= b, a *= b, a /= b, etc.\n\n" 
  <<"\t2. Operadores de incremento/decremento: a++, b++, a++++, b---- \n\n" 
  <<"\t3. Operadores aritmeticos: +, -, *, /, %\n\n" 
  <<"\t4. Operdores relacionales: ==, !=, >, <, >=, <=\n\n" 
  <<"\t5. Operadores logicos: &&, ||, !\n\n" 
  <<"\t\n\n" 
  <<"" 
  ; 
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"EXPRESIONES\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tUna expresion es una secuencia de operaciones y operandos que especifica un calculo" 
  ; 
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"USO DEL PARENTESIS\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tLos parentesis pueden utiliarse para cambiar el orden usual de la evaluacion de una expresion determinada" 
  ; 
 
   
  cout<<"\n\n"; 
  strTexto = "POR CIERTO TODO ESTO ES REAL, ES TEMA DE EXAMEN, ASI QUE ESTUDIEN"; 
  intLargoTexto = strTexto.length(); 
  intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
     
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"EJERCICIOS\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\t1. Escriba un programa en C++ que desplegue las letras desde la A hasta la Z utilizando asteriscos."; 
  cout<<"\n\n\t2. Escriba un programa en C++ que lea UNA LETRA del teclado de la A a la Z y despliegue la letra ingresada en formato de asteriscos." 
  <<"\n\n\t3. Escriba un programa en C++ que lea UNA PALABRA del teclado con caracteres de A a la Z y cada letra de la palabra ingresada despleguela en formato de asteriscos,"
  <<" ud puede definir el largo minimo y maximo de la palabra." 
  <<"\n\n\t4. Escriba un programa en C++ que despliegue un menu con las siguientes opciones:\n" 
  <<"\n\t\t1. Dibujar un cuadrado." 
  <<"\n\t\t2. Dibujar un rectangulo." 
  <<"\n\t\t3. Dibujar un circulo." 
  <<"\n\n\tEn funcion de la eleccion del usuario, dibujar la figura seleccionada utilizando asteriscos, usted define el tamanio de la figura.\n" 
  <<"\n\n\t5. Escriba un programa en C++ para dibujar la figura selecciona por el usuario de la siguiente manera: \n" 
  <<"\n\t\t1. Dibujar un cuadrado: solicitar al usuario el tamanio de un lado para definir la cantidad de asteriscos en cada lado." 
  <<"\n\n\t\t2. Dibujar un rectangulo: solicitar al usuario la base y la altura del rectangulo para la cantidad de asteriscos en cada lado del rectangulo." 
  <<"\n\n\n\t6. Escriba un programa en C++ que lea una edad y determine si es menor o mayor de edad en un rango valido de 1 a 100 anios." 
  <<"\n\n\t7. Escriba un programa en C++ que lea un numero x, y determine si es par o impar." 
  <<"\n\n\t8. Escriba un programa en C++ que lea un numero x entre 1 y 25, y despliegue todos los numeros entre 1 y x separados por comas." 
  <<"\n\n\t9. Escriba un programa en C++ que lea dos numeros p y q, entre 1 y 100, y despliegue todos los numeros entre p y q separados por comas." 
  <<"\n\n\t10. Escriba un programa en C++ que lea un numero x entre 1 y 20 y desplegue la tabla de multiplicar correspondiente." 
  <<"\n\n\t11. Escriba un programa en C++ que lea un numero x entre 1 y 100 y desplegue todos lo numeros impares entre 1 y x." 
  <<"\n\n\t12. Escriba un programa en C++ que lea un numero x entre 1 y 100 y todos los numeros donde modulo de numero / x sea cero." 
  ; 
   
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()"); 
      
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*";   
  for(int i = 1; i <= intAnchoPantalla; i++) 
  { 
          if(i == 1 || i == 80) 
               cout<<"*"; 
          else 
              cout<<" "; 
  } 
           
  strTexto = "GRACIAS POR SU ATENCION"; 
  intLargoTexto = strTexto.length(); 
  intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
   
  for(int i = 1; i <= intAnchoPantalla; i++) 
  { 
          if(i == 1 || i == 80) 
               cout<<"*"; 
          else 
              cout<<" "; 
  } 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  getch();  
} 
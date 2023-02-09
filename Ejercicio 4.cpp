/* 
Programa:          4 - EstructurasSeleccion.cpp 
Programador:       Dylan Aaron Peñate Pérez
Carnet:            3590-22-3431
Descripcion:       Programa demostrativo de C++, contiene la presentación inicial del lenguaje C++. 
Fecha de creación: 09/02/2023
Revision:          Ninguna 
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
  strTexto = "E S T R U C T U R A S  DE  S E L E C C I O N:"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*";   
   
  strTexto = "S E N T E N C I A S  IF  Y  S W I T C H"; 
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
  strTexto = "ESTRUCTURAS DE CONTROL"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
    
   i = 0; 
  while(i < intAnchoPantalla)  
  { 
          cout << "*"; 
          i++; 
  } 
   
  cout <<"\n\n\tLas estructuras de control controla el flujo de ejecución de un programa o función. " 
  <<"Las estructuras de control permiten combinar instrucciones o sentencias individuales en un simple unidad logica." 
  <<"Las estructuras de control que sirven para controlar el flujo de la ejecucion son:\n\n\n" 
  <<"\t1. Estructuras de seleccion (if, switch)\n\n" 
  <<"\t3. Estructuras de repeticion (ciclos o bucles)\n\n" 
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
  cout<<"SENTENCIA if\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"\n\tEs una estructura de control de selección principal en C++, if tiene dos alternativas o formatos posibles (true/false)." 
  <<"\n\nSentencia if de una alternativa:" 
  <<"\n\n\tif(a != 0)" 
  <<"\n\n\t\tresultado = a / b;" 
  ; 
   
  cout<<"\n\nSentencia if de dos alternativas:" 
  <<"\n\n\tif(a != 0)" 
  <<"\n\t\tcout << a << "" es positivo"" << endl;" 
  <<"\n\telse" 
  <<"\n\t\tcout << a << "" es negativo"" << endl;" 
  ; 
   
  cout<<"\n\nSentencia if de multiples alternativas:" 
  <<"\n\n\tif(x < 0)" 
  <<"\n\t{" 
  <<"\n\t\tcout << a << ""Negativo"" << endl;" 
  <<"\n\t\tabs_x = -x;" 
  <<"\n\t}" 
  <<"\n\telse if(x == 0)" 
  <<"\n\t{" 
  <<"\n\t\tcout << a << ""Cero"" << endl;" 
  <<"\n\t\tabs_x = 0;" 
  <<"\n\t}" 
  <<"\n\telse" 
  <<"\n\t{" 
  <<"\n\t\tcout << a << ""Positivo"" << endl;" 
  <<"\n\t\tabs_x = x;" 
  <<"\n\t}" 
  <<"\n\t\tcout << a << "" es negativo"" << endl;" 
  ; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"SENTENCIA DE CONTROL switch\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"\n\tEs una sentencia C++ que se utiliza para seleccionar una entre multiples alternativas. " 
  <<"La sentencia switch es especialmente ujtil cuando la seleccion se basa en el valor de una variable simple o de una expresion simple " 
  <<"denominada expresion de control o selector. El valor de esta expresion puede ser de tipo int o char, pero no de tipo double." 
  ; 
   
  cout<<"\n\nSentencia switch:" 
  <<"\n\n\tswitch(letra_nota)" 
  <<"\n\t{" 
  <<"\n\t\tcase 'A': case 'a':" 
  <<"\n\t\t\tcout << ""Sobresaliente"" << endl;" 
  <<"\n\t\t\tbreak;" 
  <<"\n\t\tcase 'B': case 'b':" 
  <<"\n\t\t\tcout << ""Notable"" << endl;" 
  <<"\n\t\t\tbreak;" 
  <<"\n\t\tcase 'C': case 'c':" 
  <<"\n\t\t\tcout << ""Aprobado"" << endl;" 
  <<"\n\t\t\tbreak;" 
  <<"\n\t\tcase 'D': case 'd':" 
  <<"\n\t\t\tcout << ""Suspenso"" << endl;" 
  <<"\n\t\t\tbreak;" 
  <<"\n\t\tdefault" 
  <<"\n\t\t\tcout << ""Nota no valida"" << endl;" 
  <<"\n\t}" 
  ; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()"); 
   
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"EJERCICIOS\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"\n\t1. Escriba un programa en C++ que solicite la nota de un estudiante expresada en un numero entero y determine la puntuacion " 
  <<"\nde la siguiente forma, entre 90 y 100, puntuacion es A. Entre 80 y 89: B. Entre 70 y 79: C. Entre 60 y 69: D. Entre 0 y 59: E." 
  <<"\n\n\t2. Escriba un programa en C++ que solicite a altura (a) y la base (b) de un triangulo rectangulo y calcule la hipotenusa (h)." 
  <<"\n\n\t3. Escriba un programa en C++ que lea la hora en notacion 24 horas (desde 00:00 hasta 23:59) y devuelva la hora en formato de 12 horas, " 
  <<"\npor ejemplo si el usuario ingresa 13:45, salida debe ser 1:45 PM." 
  <<"\n\n\t4. Escriba un programa que reciba un numero entero entre 1 y 100 y devuelva su equivalente en letras." 
  <<"\n\n\t5. Escriba un programa en C++ que lea el radio de un circulo y a continuacion visualice: circunferencia del circulo, area y diametro." 
  <<"\n\n\t6. Escriba un programa que lea un numero entero entre 1000 y 2000 y desplegue su equivalente en numeros romanos." 
  <<"\n\n\t7. Escriba un programa en C++ que solicite 3 numeros y despliegue un mensaje si estan ordenados o no." 
  <<"\n\n\t8. Escriba un programa en C++ que solicite un numero entero y determine si es negativo, cero o positivo." 
  <<"\n\n\t9. Escriba un programa en C++ que solicite un numero de mes (1 al 12) y despliegue el numero de dias que tiene el mes seleccionado." 
  <<"\n\n\t10. Escriba un programa en C++ que solicite 3 numeros y los ordene en forma ascendente y descendente." 
  <<"\n\n\t11. Escriba un programa que determine si una anio es bisiesto." 
  <<"\n\n\t12. Escriba un programa que permita convertir de dolares a quetzales, el programa debera solicitar el tipo de cambio." 
  <<"\n\n\t13. Escriba un programa que permita convertir de quetzales a dolares, el programa debera solicitar el tipo de cambio." 
  <<"\n\n\t14. Escriba un programa que permita convertir de centimetros a pulgadas y viceversa." 
  <<"\n\n\t15. Escriba un programa que permita convertir de kilometros a millas y viceversa." 
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
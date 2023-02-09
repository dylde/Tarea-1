/* 
Programa:          2 - Intro2.cpp 
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
     
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; 
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
   
  strTexto = "E L   L E N G U A J E  C + +.   E L E M E N T O S   B A S I C O S    2"; 
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
 
  strTexto = "5990 - INGENIERIA  EN SISTEMAS DE INFORMACION Y CIENCIAS DE LA COMPUTACION"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "SEDE TIERRA NUEVA"; 
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
   
  strTexto = "E L   L E N G U A J E  C + +.   E L E M E N T O S   B A S I C O S    2"; 
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
 
  strTexto = "CREACION DE UN PROGRAMA"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
    
   i = 0; 
  while(i < intAnchoPantalla)  
  { 
          cout << "*"; 
          i++; 
  } 
   
  cout <<"\n\n\tLos pasos para ejecutar un programa dependeran del compilador C++ que se utilice, pero seran similares a:\n\n\n" 
  <<"\t1. Utilizar un Entorno de Desarrollo Integrado (IDE) para escribir el pr\t   ograma y grabarlo en un archivo.\n\n" 
  <<"\t2. Compilar el codigo fuente, traduccion del codigo fuente en codigo obj\t   eto (extension .obj).\n\n" 
  <<"\t3. Enlazar el codigo objeto con las bibliotecas correspondientes.\n\n" 
  <<"\t4. Generacion de codigo ejecutable.\n\n" 
  ; 
   
  cout<<"\n\n"; 
  strTexto = "POR CIERTO TODO ESTO ES REAL, ES TEMA DE EXAMEN, ASI QUE ESTUDIEN"; 
  intLargoTexto = strTexto.length(); 
  intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
   
  cout<<"\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"DEPURACION DE UN PROGRAMA EN C++\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tEs el proceso de encontrar y corregir errores dentro de un programa, la correcci[on probablemente es la etapa mas facil, " 
  <<"siendo la deteccion y el aislamiento de error las tareas mas dificiles.\n\n\n " 
  <<"\tDesde el punto de vista conceptual existen cuatro tipos de errores:\n\n\n" 
  <<"\t\t1. Errores de sintaxis.\n" 
  <<"\t\t2. Errores logicos.\n" 
  <<"\t\t3. Errores de regresion.\n" 
  <<"\t\t3. Errores en tiempo de ejecucion.\n" 
  ; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"1. Errores de sintaxis\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tEstos errores se producen cuando el programa viola la sintaxis, es decir, las reglas de gramatica del lenguaje. Los errores de " 
  <<"sintaxis son los mas obvios de reconocer, ya que ellos son detectados y aislados por el compilador de forma automatica a momento de la " 
  <<"compilacion. Si el programa viola alguna de las reglas, el compilador genera un mensaje de error o diagnostico que explica el problema" 
  <<"(aparente), los errores mas comunes son:\n\n\n" 
  <<"\t\t1. Puntos y coma despues de la cabecera main().\n" 
  <<"\t\t2. Omision de punos y comas al final de una sentencia.\n" 
  <<"\t\t3. Olvido de la doble barra inclinada antes de un comentario.\n" 
  <<"\t\t4. Olvido de dobles comillas al cerrar una cadena de texto.\n" 
  ; 
   
  cout<<"\n\n\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"2. Errores logicos\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tSon errores del programador en el disenio del algoritmo, estos errores son dificiles de encontrar y aislar, ya que no suelen ser " 
  <<"detectados por el compilador. Suponga, por ejemplo que una linea de un programa contiene la sentencia: " 
  <<"\n\n\n\t\tdouble vDblIVA = precio * 14%;\n" 
  <<"\n\n\n\tPero resulta que el IVA se calcula al 12%. El compilador no mostrara ninguna mensaje de error de sintaxis, ya que no se ha violado " 
  <<"ninguna regla de sintaxis, por lo tanto el compilador no detecta el error y el programa se ejecutara correctamente (aparentemente).\n\n\n" 
  <<"\tSe pueen detectar errores logicos comprobando el programa en su totalidad, comprobando su salida con resultados previstos, es posible" 
  <<"prevenir errores logicos mediante un adecuado analisis del problema. " 
  ; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()"); 
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"3. Errores de regresion \n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tSon aquellos que se crean accidentalmente cuando se intenta corregir un error logico. Siempre que se corrige un error se debe " 
  <<"comprobar totalmente la exactitud (correccion) para asegurarse que se fija el error que se esta tratando y no produce otro error." 
  ; 
   
  cout<<"\n\n\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"4. Errores en tiempo de ejecucion \n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tUn error en tiempo de ejecucion puede ocurrir como resultado de obligar a la computadora a realzar un operacion ilegal como " 
  <<"dividir un numero por cero o manipular datos no validos o no definidos. Cuando ocurres este tipo de error, la computadora detendra la " 
  <<"ejecucion del programa y emitira un mensaje de diagnostico como: " 
  <<"\n\n\n\t\tDivide error, line number ***" 
  <<"\n\n\n\tSi se intenta manipular datos no validos o indefinidos, su salida puede contener resultados extranios. Por ejemplo, se puede " 
  <<"producir un desbordamiento aritmetico cuando un programa intenta almacenar un numero que es mayor que el tamanio que puede manipular " 
  <<"la computadora." 
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
   
  strTexto = "E L   L E N G U A J E  C + +.   E L E M E N T O S   B A S I C O S    2"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "LOS ELEMENTOS DE UN PROGRAMA EN C++"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
    
   i = 0; 
  while(i < intAnchoPantalla)  
  { 
          cout << "*"; 
          i++; 
  } 
   
  cout<<"\n\tUn programa C++ consta de uno o mas archivos. Un archivo es traducido en diferente fases, la primera fase es el preprocesado, " 
  <<"el resultado del preprocesado es una secuncia de tokens o elementos lexicos de un programa. Existen cuatro clases de tokens:\n\n" 
  <<"\n\t\t1. Identificadores: Secuencias de caracteres, letras y digitos p\t\t   ara nombres variables, constantes, funciones, etc." 
  <<"\n\n\t\t2. Palabras reservadas: Palabras especiales con algun significad\t\t   o para el lenguaje de programacion, no pueden ser identificad\t\t   or." 
  <<"\n\n\t\t3. Literales: Es cualquier valor numerico, caracter, o cadena de\t\t   caracteres que puede aparecer dentro de un programa." 
  <<"\n\n\t\t4. Operadores: Simbolos que especifican un calculo u operacion." 
  <<"\n\n\n\t¿Los comentarios son tokens de un programa Si/No? " 
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
   
  strTexto = "E L   L E N G U A J E  C + +.   E L E M E N T O S   B A S I C O S    2"; 
  int intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "TIPOS DE DATOS EN C++"; 
  intEspacios = ((intAnchoPantalla / 2) + strTexto.length() / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
    
   i = 0; 
  while(i < intAnchoPantalla)  
  { 
          cout << "*"; 
          i++; 
  } 
   
  cout<<"\n\tSon conjuntos de datos que comparten las mismas caracteristicas, los tipos de datos basicos de C++ son:\n\n\n" 
  <<"\n\t\t1. char: cualquier elemento de un conjunto de caracteres: 'C'." 
  <<"\n\t\t   El conjunto predefinido de C++ es ASCII." 
  <<"\n\t\t2. short: Numero enteros desde -128 hasta 127." 
  <<"\n\t\t3. int: Numeros enteros desde -32768 hasta 32671." 
  <<"\n\t\t4. unsigned int: desde 0 hasta 65535." 
  <<"\n\t\t5. long: numeros enteros desde -2147483648 hasta 2147483637." 
  <<"\n\t\t6. float: Decimales desde 3.4*(10 ^ -38) hasta 3.4*(10 ^ 38)." 
  <<"\n\t\t7. bool: valores logicos true/false." 
  ; 
   
  cout<<"\n\n\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"VARIABLES \n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tEn C++ es una posicion con nombre (un identificador) en memoria donde se almacena un valor de cierto TIPO DE DATO que puede ser " 
  <<"modificado, las variables pueden almacenar cualquier tipo de dato: cadenas, numeros, estructuras. Las variables pueden ser LOCALES O GLOBALES." 
  <<"\n\n\tSCOPE O AMBITO: Zona de un programa en que una variable o constante esta 'visible', activa o utilizable, las variables o constantes " 
  <<"locales se declaran adentro de una funcion, las variables o constantes globlales se declaran en la seccion de declaraciones globales, " 
  <<"una variable o constante local es 'visible' o utilizable unicamente dentro de la funcion donde fue declarada, por el contrario, una " 
  <<"variable o constante global " 
  <<"sera 'visible' o utilizable por cualquier funcion dentro del programa." 
  <<"\n\n\nDeclaracion de variables:" 
  <<"\n\n\tLa declaracion de una variable es una sentencia que proporciona informacion de la variable al compilador C++, su sintaxis es:" 
  <<"\n\n\n\t\ttipo de dato identificador: long numero; int edad; etc..." 
  <<"\n\n\nInicializacion de variables:" 
  <<"\n\n\tEs la asignacion de un valor inicial a una variable cuando se declara, las variables se puden inicializar a la vez que se declaran, " 
  <<"o bien, inicializarse despues de la declaracion. Es muy aconsejable declarar y asignar valor inicial a variables/costantes en un solo paso." 
  <<"\n\n\t\tchar respuesta = 'S';" 
  <<"\n\n\t\tint contador = 0;" 
  <<"\n\n\t\tfloat peso = 156.45;" 
  <<"\n\n\t\tint anio = 2019;" 
  ; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  getch();  
  system("CLS()");  
   
   
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"CONSTANTES\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  cout<<"\n\tSon identificadores con un memoria asigna y cuyo valor no puede ser cambiado, la palabra reservada const espedifica que el valor " 
  <<"de una variable no puede ser cambiado en el tiempo. Ejemplos: " 
  <<"\n\n\n\tconst char caracter = 'H' " 
  <<"\n\n\n\tconst float pi = '3.141516' " 
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
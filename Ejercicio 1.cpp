/* 
Programa:          1 - Intro.cpp 
Programador:       Dylan Aaron Peñate Pérez 
Carnet:            3590-22-3431
Descripcion:       Programa demostrativo de C++, contiene la presentación inicial del lenguaje C++. 
Fecha de creación: 09/02/2023
*/ 
 

#include <iostream>  
#include "conio.h" 
#include <iomanip> 
using namespace std;

int intEdad = 0; 

double dblCantidadA = 0; 

double dblCantidadB = 0; 

bool boolValorLogico = true; 

char chrCaracter = 'A'; 
string strCadena = ""; 
double suma = 0; 
 
int divisor = 0; 
int dividendo = 0; 
int modulo = 0; 
int coeficiente = 0; 
 
const double numeroPi = 3.1415; 
 
int main() { 
     

  system("CLS()");  
  cout << "Bienvenido al programa de demostracion ALGORITMOS - UMG - LA FLORIDA\n\n\n"; 
  cout << "\tHola mundo, este es mi primer programa!\n\nPor favor maximice su pantalla usando el mouse y ajuste la barra hasta arriba haciendo clic en el icono de la flecha hacia arriba de esta pantalla...\n\n\n";
  cout << "\n\n\nPresione la tecla Enter para continuar cuando este listo..."; 

  getch();  

  system("CLS()");  
   
 
  const int intAnchoPantalla = 80; 
   
  cout<<"\n\n"; 

  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
     
  string strTexto = "E L   L E N G U A J E  C + +.   E L E M E N T O S   B A S I C O S"; 
  int intLargoTexto = strTexto.length(); 
  int intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
 
  strTexto = "ESTRUCTURA GENERAL DE UN PROGRAMA EN C++"; 
  intLargoTexto = strTexto.length(); 
  intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
  cout<<"*"<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<"*"; 
    

  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  cout <<"\n\tUn programa en C++ se compone de una o mas funciones. Una de las funciones debe ser obligatoriamente main. " 
  <<"Una funcion en C++ es un grupo de instrucciones que realizan una o mas acciones. Asimismo, un programa contendra una serie de " 
  <<"de directivas #include que permitiran incluir en el mismo programa, archivos de cabecera que a su vez constaran de funciones y datos " 
  <<"predefinidos en ellos.\n\n\tDe un modo mas explicito, un programa de C++ puede incluir:\n\n" 
  <<"\t\t1. Directivas de procesador;\n\t\t2. Declaraciones globales;\n\t\t3. La funcion main();\n\t\t4. Funciones definidas por el usuario;" 
  <<"\n\t\t5. Comentarios del programa;"; 
   
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
  cout<<"1. Directivas de preprocesador\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\tEl preprocesador es un programa C o C++ que ejecuta directivas (instrucciones al compilador " 
  <<"antes de que se compile el programa principal). Las dos directivas mas comunes son #include y #define.\n\n\tLas directivas son " 
  <<"instrucciones al compilador, NO FINALIZAN con punto y coma (;). La directiva #include, indica al compilador que lea el archivo fuente " 
  <<"que viene a continuacion y su contenido lo inserte en la posicion donde se encuentra dicha directiva. Estos archivos se denominan: " 
  <<"ARCHIVOS DE CABECERA O ARCHIVOS DE INCLUSION."; 
  cout<<"\n\n\tLos archivos de cabecera tienen extension .h o .hpp y contienen codigo C o C++. Cuando se instala el compilador, estos archivos " 
  <<"de cabecera se almacenan automaticamente en el disco duro.\n\n\tEl archivo de cabecera mas frecuente es iostream.h, #include <iostream.h> " 
  <<"este archivo permitira utilizar las funciones de biblioteca cin y cout, asi como otras rutinas de biblioteca que realizan operaciones " 
  <<"de entrada y salida. "; 
   
  cout<<"\n\n\n"; 
  cout<<"TAREA: INVESTIGAR TODOS ARCHIVOS DE CABECERA QUE EXISTEN EN C++ Y LAS FUNCIONES DE BIBLIOTECA INCLUIDAS EN CADA ARCHIVO DE CABECERA."; 
  cout<<"\n\n\nPresione Enter para continuar..."; 
 
  getch();  

  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"2. Declaraciones globales\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  cout<<"\n\tLas declaraciones globales indican al compilador que las funciones definidas por el usuario o variables asi declaradas son " 
  <<"comunes o compartidas entre todas las funciones del programa. Las declaraciones globales se situan antes de la funcion main().\n\n\n\t" 
  <<"Si se declara una variable vIntEdad del tipo: int vIntEdad; cualquier funcion del programa, incluyendo main(), puede acceder a la variable " 
  <<"vIntEdad.\n\n\n\tLa zona de declaraciones globales de un programa puede incluir declaraciones de variables ademas de declaraciones de " 
  <<"funcion.\n\n\n\tLas declaraciones de funcion se denominan prototipos.\n\n" 
  ; 
   
  strTexto = "int media(int a, int b);"; 
  intLargoTexto = strTexto.length(); 
  intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
  cout<<" "<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<" "; 
   
  cout<<"\n\n\nPresione Enter para continuar..."; 
  
  getch();  

  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"3. Funcion main()\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  cout<<"\n\tCada programa C++ tiene una funcion main() que es un punto inicial de entrada al programa. Su estructura es:\n\n\n\n" 
  <<"\tmain()\n\t{\n\t... bloque de sentencias...\n\t}\n\n\n\n" 
  <<"\tLas sentencias incluidas entre las llaves {...} se denominan bloque. Un programa puede contener unicamente una funcion main().\n\n" 
  <<"\tAdemas de la funcion main(), un programa C++ consta de una coleccion de funciones.\n\n\n\n" 
  ; 
   
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"Una funcion C++ es un subprograma que devuelve un unico valor, un conjunto de valores o realiza alguna tarea especifica tal como E/S.\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
 
  cout<<"\n\n\n\tEn un programa corto, todo el programa puede incluirse completamente en la funcion main(). Si es un programa largo es " 
  <<"aconsejable dividirlo en varios subprogramas que seran llamados o invocados desde la funcion main().\n\n" 
  <<"\tLas sentencias situadas dentro del cuerpo de la funcion main() o cualquier otra funcion deberan terminar en punto y coma." 
  ; 
 
  cout<<"\n\n\nPresione Enter para continuar..."; 

  getch();   
 
  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"4. Funciones definidas por el usuario main()\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  cout<<"\n\tUn programa en C++ es una coleccion de funciones. Todas las funciones conitenen una o mas sentencias C++, cada funcion se crea con " 
  <<"el objetivo de ejecutar una unica funcion o tarea tales como imprimir la pantalla, escribir en un archivo o cambiar el color de la pantalla. " 
  <<"Es posible definir y ejecutar un numero de funciones casi ilimitado en un programa de C++.\n\n\n" 
  <<"\tTodas las funciones tienen nombre y una lista de valores que reciben (parametros). Se puede asignar cualquier nombre a una funcion, " 
  <<"pero se aconseja usar nombres que describan el proposito de la funcion.\n\n\n" 
  <<"\tEn C++, las funciones requieren una declaracion o prototipo en el programa:\n\n\n" 
  ; 
   
  strTexto = "void func demo();"; 
  intLargoTexto = strTexto.length(); 
  intEspacios = ((intAnchoPantalla / 2) + intLargoTexto / 2); 
  cout<<" "<<setw(intEspacios)<<right<<strTexto<<setw((intAnchoPantalla - intEspacios) - 1)<<" "; 
   
  cout<<"\n\n\nSe ampliara el tema en clases posteriores."; 
 
  cout<<"\n\n\nPresione Enter para continuar..."; 
 
  getch();   

  system("CLS()");  
   
  cout<<"\n\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
  cout<<"5. Comentarios\n"; 
  for(int i = 1; i <= intAnchoPantalla; i++) cout << "*"; 
   
  cout<<"\n\tUn comentario es cualquier informacion que se añade al archivo fuente para proporcionar informacion de cualquier tipo. El compilador " 
  <<"ignora los comentarios, no realiza ninguna tarea completa. El uso de comentarios es totalmente opcional, aunque dicho uso es muy recomendable.\n\n\n" 
  <<"\tEs una buena practica de programacion comentar un archivo fuente tanto como sea posible para entender fácilmente el programa cuando " 
  <<"el programa necesite mejoras, mantenimiento o correccion de errores.\n\n\n" 
  <<"\tLa informacion que se aconseja incluir es. nombre del archivo, nombre del programdor, una breve descripción, fecha en se creó, la versión " 
  <<"y la información de la revision.\n\n\n\tEn C++ los comentarios de un programa se pueden introducir de dos formas:\n\n\n" 
  <<"\t\t* Estilo C estandar: Comienzan con /* y terminan con */, todo el\t\t  texto entre estas dos secuencias sera ignorado por el compilad\t\t  or.\n\n" 
  <<"\t\t* Estilo C++: Los comentarios estilo C++ definen un línea de com\t\t  entario con dos diagonales //, todo lo que viene después" 
  <<"de la \t\t  doble diagonal es un comentario y el compilador lo ignora." 
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
 
//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
*/
#include <iostream> //el preprocesador #include se incluye la libreria iostream que es la libreria nativa del lenguaje de programación C++
using namespace std; //namespace se usa para usar las opciones cin y cout, esta linea hace que se optimece el codigo std 
int main() //aqui iniciamos la función principal los () estan vacios dado que no va a recibir ningun parametro 
{
 int a, b;//dos variables de tipo entero int
 cout << "Ingresa el primer numero"<<endl; //imprime en pantalla un string o caracteres de texto
 cin >> a; //se asigna a la variable a, se ingresa lo que el usuario digite en el teclado
 cout << "Ingresa el segundo numero"<<endl; //impre en pantalla el string "Ingresa el segundo número"
 cin >> b;//el usuario ingresa la variable b
 cout <<"La suma de los numeros es: "<< a+b <<endl; //imprime en pantalla y concatena las variables int que ingreso el usuario
 cout <<"La resta de los numeros es: "<< a-b <<endl;
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
 cout <<"La division de los numeros es: "<< a/b <<endl;
 cout <<"El residuo es: "<< a%b <<endl;

 system("pause");
 return 0;
}

/*---------------------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* FACULTAD DE INGENIERÍA
* DEPARTAMENTO DE CIENCIA DE LA COMPUTACIÓN
*
* Curso:     CC3086 - Programación de microprocesadores.
* Actividad: Prueba de ejecución de programas en C++ en el ordenador.
* Descripción: Corregir errores en programa para su ejecución
------------------------------------------------------------------------------*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;                                    // Usar estandar de c++ para flujos de IN y OUT 
int main(int nNumberofArgs, char* pszArgs[])
{
    // se inician las variables con valores arbitrarios, mas adelante seran modificados por el usuario
	int var1 = 1;
    int var2 = 2;
	
    // se piden los valores al usuario
    cout << "Ingrese un valor entero" << endl;
    cin >> var1;
    cout << "Ingrese otro valor entero" << endl;
    cin >> var2;
    
    // se hace la suma de los valores y se imprimen los resultados
    cout << "La suma de " << var1 << " y " << var2 << " es " << var1 + var2 << endl;
    
    // se hace la resta de los valores y se imprimen los resultados
    cout << "La resta de " << var1 << " y " << var2 << " es " << var1 - var2 << endl;
    
    // se hace la multiplicacion de los valores y se imprimen los resultados
    cout << "La multiplicación de " << var1 << " y " << var2 << " es " << var1 * var2 << endl;
    
    // se hace la division de los valores y se imprimen los resultados
    cout << "La división de " << var1 << " y " << var2 << " es " << var1 / var2 << endl;

    // se compara los valores y se imprime cual es mayor y cual es menor
    if (var1 > var2)
    {
        cout << "El mayor es " << var1 << endl;
    }
    else
    {
        cout << "El mayor es " << var2 << endl;
    }
    
    // se compara los valores y se imprime si son iguales o no
    if (var1 == var2)
    {
        cout << "Los valores son iguales" << endl;
    }
    else
    {
        cout << "Los valores son diferentes" << endl;
    }

	return 0;                                          // Valor de retorno entero, La función se ha ejecutado correctamente
}
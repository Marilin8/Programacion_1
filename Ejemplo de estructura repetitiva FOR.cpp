/*Programa que imprima en pantalla la suma de todos los números impares que existen desde 
el número 1 hasta el número 100 y que diga cuantos números impares hay*/

//incluimos nuestra libreria
#include <iostream>

//incluimos el espacio de nombres
using namespace std;

//Declaramos nuestra función principal
int main (){ 
	
	//declaramos una variable entera y le asignamos un valor igual a 1
	int impar =1;
	
	//mostramos al usuario instrucciones del sistema
	cout<<"Suma de todos los numeros impares desde el 1 hasta el 100"<<endl;
	
	 //declaramos nuestra estructura repetitiva FOR
	for(int i= 1; i<=100; i++) {
		
		//declaramos una estructura condicional IF			
		if (i% 2 == 1)
	{
		impar++;
		cout<<i <<endl;	//Se mostrará en pantalla SÓLO los números impares.	
	}
		
	}
	
	cout<<"El total de numeros impares entre el 1 y el 100 son: "<<impar<<endl;	
	
return 0;	
}
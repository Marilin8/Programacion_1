/*Programa que permita ingresar el número de auto y el tiempo de la carrera.
El programa deberá mostrar el número del auto que llegó en primer lugar, es decir
el auto que hizo menos tiempo de carrera y mostrar el tiempo récord, así mismo debe
imprimir en pantalla el numero de auto que llegó en ultimo lugar y el tiempo 
de carrera.*/

//Incluimos nuestra libreria
#include <iostream>

//Incluimos el espacio de nombres
using namespace std;

//Declaramos nuestra función principal
int main(){
	
	//Declaramos nuestras variables
	char a;
	int numauto,autoG,autoP,cont=0;
	float tiempo,tiempoG,tiempoP;
	
	//Incluimos la estructura repetitiva Do While
	do{
		//Ingresamos las instrucciones para el usuario
		cont++;
		cout<<"Ingrese el numero de Auto"<<endl;
		cin>>numauto;
		cout<<"Ingrese el tiempo de la carrera: "<<endl;
		cin>>tiempo;
		
		//Declaramos estructuras condicionales IF,ELSE
		if(cont==1){
			autoG=numauto;
			tiempoG=tiempo;
			autoP=numauto;
			tiempoP=tiempo;
		}
		else{
			if(tiempo<tiempoG){
				tiempoG=tiempo;
				autoG=numauto;
			}
			if(tiempo>tiempoP){
				tiempoP=tiempo;
				autoP=numauto;
			}
		}
			
		cout<<"Quiere ingresar otro auto (S/N) ? "<<endl;
		cin>>a;
	}while(a!= 'N');	
	cout<<"LOS RESULTADOS DE LA CARRERA SON: "<<endl;
	cout<<"Auto Ganador es: "<<autoG<<" Con un tiempo de: "<<tiempoG<<endl;
	cout<<"Auto Perdedor es: "<<autoP<<" Con un tiempo de: "<<tiempoP<<endl;
	
	system("pause");
	
	
}
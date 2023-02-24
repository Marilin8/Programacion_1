//Declaramos nuestras librerias
#include <iostream>

//Declaramos el espacio de nombres
using namespace std;

//Declaramos la función principal
int main(){
	
	//Definimos las variables
	int cont=0,vec[100];
	
	//Mostramos las instrucciones al usuario
	cout<<"Los numeros impares entre 1 y 100 son: "<<endl;
	for(int i=1; i<=100; i++){
		
		if(i% 2==1){
			vec[cont]=i;
			cont++;
		}
	}
	for (int i=0; i<cont; i++){
		cout<<vec[i]<<endl;
	
	}
	
	return 0;
}
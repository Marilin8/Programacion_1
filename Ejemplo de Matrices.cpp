//Definimos las librerias 
#include <iostream>
#include <conio.h>

//Incluimos el espacio de nombres
using namespace std;

//Incluimos la función principal
int main(){
	
	//Definimos las variables
	int mat[4][4];
	
	//Agregamos ciclos anidados 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		
			cout<<"Ingrese los numeros de 0 a 15 ["<<i<<"]["<<j<<"]: ";
			cin>>mat[i][j];
		}
	}
	
	cout<<"Matriz Original \n";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<4;i++){
		for(int j=0; j<4; j++){
			cout<<mat[j][i]<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}
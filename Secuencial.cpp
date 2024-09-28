#include<iostream>
using namespace std;
int secuencialOrd(int arr[],int n,int dato);
int secuencialDes(int arr[],int n,int dato);
int main(){
	int opc;
	do{
		int dato;
		cout<<"1.- Busqueda para datos Ordenados"<<endl;
		cout<<"2.- Busqueda para datos Desordenados"<<endl;
		cout<<"3.- SALIR"<<endl;
		cout<<"selecione una opcion: "; cin>>opc;
		switch(opc){
			case 1:
				int arr[100],n;
				cout<<"ingrese el tamanho del arreglo ORDENADO: "; cin>>n;
				for(int i=0;i<n;i++){
					cout<<"ingrese un numero: "; cin>>arr[i];
				}
				cout<<"seleccione el datos a buscar: "; cin>>dato;
				cout<<"el dato ingresado esta en la posicion: "<< secuencialOrd( arr, n, dato)<<endl;
				break;
			case 2:
				cout<<"ingrese el tamanho del arreglo DESORDENADO: "; cin>>n;
				for(int i=0;i<n;i++){
					cout<<"ingrese un numero: "; cin>>arr[i];
				}
				cout<<"seleccione el datos a buscar: "; cin>>dato;
				cout<<"el dato ingresado esta en la posicion: "<< secuencialDes( arr, n, dato)<<endl;
				break;
			case 3:
				cout<<"SALIENDO......"<<endl;
				break;
			default:
				cout<<"opccion invalida intente de nuevo"<<endl;
				break;
		}
		system("pause");
		system("cls");
	}while(opc!=3);
	return 0;
}

int secuencialOrd(int arr[],int n,int dato){
	int i=1;
	while(i<=n && arr[i]<dato){
		i++;
	}
	int pos;
	if(i>n || arr[i]!=dato){
		pos=-i;
	}else{
		pos=i;
	}
	return pos;
}

int secuencialDes(int arr[],int n,int dato){
	int pos=0;
	int i=1;
	while(i<=n && arr[i]!=dato){
		i++;
	}
	if(i<=n){
		pos=i;
	}
	return pos;
}





 

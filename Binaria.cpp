#include<iostream>
using namespace std;
int binaria(int arr[],int n,int dato);
int main(){
	int n,arr[n];
	int dato;
	cout<<"ingrese el tamanho de arreglo ordenado: "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero: "; cin>>arr[i];
	}
	cout<<"ingrese el dato abuscar: "; cin>>dato;
	cout<<"la posicion del dato a buscar es: "<< binaria(arr,n,dato)<<endl;
	
	return 0;
}

int binaria(int arr[],int n,int dato){
	int izq=0;
	int der=n;
	int cen=0;
	int m;
	while(izq<=der && cen>=0){
		m=((izq+der)/2);
		if(arr[m]==dato){
			cen=1;
		}else if(arr[m]<dato){
			izq=m+1;
		}else{
			der=m-1;
		}
	}
	int pos=0;
	if(cen=1){
		pos=m;
	}else{
		pos=izq;
	}
	return pos;
}

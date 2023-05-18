
#include<iostream>
#include<math.h>

using namespace std;

void imprimeMenu(){
	cout << "-----------------------------" << endl;
	cout << "0 - Imprimir todos" << endl;
	cout << "1 - Imprimir pares" << endl;
	cout << "2 - Imprimir impares" << endl;
	cout << "3 - Imprimir divisiveis por n" << endl;
	cout << "4 - verifica se é primo" << endl;
	cout << "s - Sair" << endl;
	cout << "-----------------------------" << endl;
	cout << "" << endl;
}

void imprimeTodos(int n){
	for(int i=0; i < n; i++){
		cout << i << ",";
	}
	cout << endl;
}

void imprimePares(int n){
	cout << "Os numeros pares sao:";
	for(int i=0; i < n; i++){
		if(i%2==0){
			cout << i << ",";
		}
	}
	cout << endl;
}

void imprimeImpares(int n){
	cout << "Os numeros impares sao:";
	for(int i=0; i < n; i++){
		if(i%2!=0){
			cout << i << ",";
		}
	}
	cout << endl;
}

void imprimeDivisiveispordiv(int n, int div){
	int i=0;
	cout << "Os divisiveis por " << div << "sao:";
	while(i < n){
		if (i%div == 0){
			cout << i << ",";
		}
		i++	
	}
	cout << endl;
	
}

bool verificaeEPrimo(int n){
	for(int i =2; i < n; i++){
		if (n % i == 0){
			return false;
				cout << "nao e primo";
		}else {
			return true;
			cout << "e primo";
		}
	}	
}
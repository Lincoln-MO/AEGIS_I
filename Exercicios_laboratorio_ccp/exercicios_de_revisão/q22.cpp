// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

void imprime_Divisiveis_de_n(int n){
	int i = 1;
	cout << "Os divisores de " << n << " sao: ";
	while((i < n)||(i > n)){
		if (n%i == 0){
			cout << i << ",";
		}
		i++;
	}
	cout << endl;
}

int main(){
	int numero = 0;
	do{
		cout << "Informe um numero inteiro: ";
		cin >> numero;
	}while(numero==0);
	imprime_Divisiveis_de_n(numero);
	return 0;
}
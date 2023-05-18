// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

void imprime_se_e_par_ou_impar(int n){
	if(n%2==0){
		cout << "O numero e par!" << endl;
	}else{
		cout << "O numero e impar!" << endl;
	}
}

int main(){
	int numero = 0;
	cout << "Informe um numero inteiro: ";
	cin >> numero;
	imprime_se_e_par_ou_impar(numero);
	return 0;
}
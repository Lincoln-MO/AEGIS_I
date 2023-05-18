// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;
//verifica e o número informado e positivo, negativo ou neutro, considerando apenas a função SOMA (lembre que a função soma inclui adição e subtração).
void verifica_se_e_positivo_negativo_neutro(float n){
	if(n > 0){
		cout << "O numero e positivo!" << endl;
	}else if(n < 0){
		cout << "O numero e negativo!" << endl;
	}else{
		cout << "O numero e neutro" << endl;
	}
}

int main(){
	float numero = 0;
	cout << "Informe um numero inteiro: ";
	cin >> numero;
	verifica_se_e_positivo_negativo_neutro(numero);
	return 0;
}
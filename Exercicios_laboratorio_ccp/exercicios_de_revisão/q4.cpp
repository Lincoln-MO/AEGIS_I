// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

float salario_liquido(float sb, float vhex, float nhex){
	float salario_real = 0;
	salario_real = (sb + vhex*nhex)-(sb + vhex*nhex)*0.08;
	return salario_real;
}

int main(){
	float salario_bruto = 0, valor_horas_extras = 0, numero_horas_extras = 0;
	do{
		cout << "Informe o valor do salário bruto: ";
		cin >> salario_bruto;
	}while(salario_bruto <= 0);
	do{
		cout << "Informe o valor das horas extras: ";
		cin >> valor_horas_extras;
	}while(valor_horas_extras <= 0);
	do{
		cout << "Informe o número de horas extras: ";
		cin >> numero_horas_extras;
	}while(numero_horas_extras < 0);
	cout << "O valor do salário líquido é: " << salario_liquido(salario_bruto, valor_horas_extras, numero_horas_extras) << endl;
	return 0;
}
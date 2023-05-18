// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

void aumenta_salario(float salario,float percent_aument){
	float salario_novo = 0, aumento = 0;
	aumento = (percent_aument/100)*salario;
	salario_novo = salario + aumento;
	cout << "O novo salario sera: " << salario_novo << "\nO valor do seu aumento foi de: " << aumento << endl;
}

int main(){
	float a = 0, b = 0;
	do{
		cout << "Informe o valor do salario: ";
		cin >> a;
	}while(a <= 0);
	do{
		cout << "Informe o percentual de aumento: ";
		cin >> b;
	}while(b <= 0);
	aumenta_salario(a,b);
	return 0;
}
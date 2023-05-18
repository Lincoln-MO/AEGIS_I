// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>
//#include <locale.h> 

using namespace std;

float valor_total_da_energia(float nqwc){
	float valor_qw = 0.46, icms = 0.18, total_a_pagar = 0;
	total_a_pagar = nqwc*valor_qw +  (nqwc*valor_qw)*icms;
	return total_a_pagar;
}

int main(){
	//setlocale(LC_ALL,"portuguese");
	float numero_qw_consumido = 0;
	do {
		cout << "Informe a quantidade de quilowatts consumida:";
		cin >> numero_qw_consumido;
	}while(numero_qw_consumido < 0);
	cout << "O valor total a ser pago pela energia elétrica é: " << valor_total_da_energia(numero_qw_consumido) << endl;
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
//função converte celsius para farenhait
float converte_celsius_para_farenhait(float x) {
	float tf = 0;
	float tf = 1.8*x+32;
	return tf;
}

int main(){
	float tc = 0;
	cout << " Informe o valor da temperatura em Celsius:";
	cin >> tc;
	cout << " A temperatura equivale a:" << converte_celsius_para_farenhait(tc) << "Farenhait" << endl;
	return 0;
}
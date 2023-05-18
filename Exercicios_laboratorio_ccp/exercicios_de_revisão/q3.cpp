// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

//função converte horas para minutos.
float convert_horas_para_minutos(float horas){
	float minutos = 0;
	minutos = horas*60;
	return minutos;
}

int main(){
	float h = 0;
	do{
		cout << "Informe a quantidade de horas:";
		cin >> h;
	}while(h <= 0);
	cout << h << " horas equivalem a " << convert_horas_para_minutos(h) << " minutos." << endl;
	return 0;

}
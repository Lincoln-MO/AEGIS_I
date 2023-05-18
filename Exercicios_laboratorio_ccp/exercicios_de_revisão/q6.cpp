// Nome: Lincoln Martins de Oliveira		Mat:2021008452

#include<iostream>
#include<math.h>

using namespace std;

float media_km_por_litro(float kmr, float cc){
	float media_gasta = 0;
	media_gasta = kmr/cc;
	return media_gasta;
}

float media_litro_por_km(float kmr, float cc){
	float media_gasta = 0;
	media_gasta = cc/kmr;
	return media_gasta;
}

int main(){
	float kmrodado = 0, combust_consumido = 0;
	do{
		cout << "Informe a quilometragem rodada: ";
		cin >> kmrodado;
	}while(kmrodado <=0);
	do{
		cout << "Informe a quantidade de combustivel consumida em litros: ";
		cin >> combust_consumido;
	}while(combust_consumido <=0);
	cout << "A quilometragem media rodada para cada litro de combustivel gasto e (km/l): " << media_km_por_litro(kmrodado,combust_consumido) << endl;
	cout << "A quantidade de combustivel gasta por quilometro e (l/km): " << media_litro_por_km(kmrodado,combust_consumido) << endl;
	return 0;
}
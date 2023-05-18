#include<iostream>
#include<math.h>

using namespace std;

float distancia_entre_a_e_b(float xa, float ya, float xb, float yb){
	float distancia = 0;
	distancia = sqrt(((xb - xa)*(xb - xa))+((yb - ya)*(yb - ya)));
	return distancia;	
}

float verifica_se_os_pontos_sao_colineares (float xa, float ya, float xb, float yb){
	float determinante = 0;
	determinante = xa*yb - ya*xb;
	return determinante;
}
int main () {
	float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0, determinante1 = 0, determinante2 = 0, distancia12 = 0, distancia34 = 0, perimetro = 0, area = 0;
	cout << " Digite as coordenadas do primeiro lado do retangulo :";
	cin >> x1 >> y1; 
	cin >> x2 >> y2;
	cout << " Digite as coordenadas  do segundo lado do retangulo :";
	cin >> x3 >> y3; 
	cin >> x4 >> y4; 
	determinante1 = verifica_se_os_pontos_sao_colineares (x1, y1, x2, y2);
	determinante2 = verifica_se_os_pontos_sao_colineares (x3, y3, x4, y4);
	if (determinante1 > 0){
		cout << "Os pontos nao sao colineares, ou seja, os pontos nao formam um lado do retangulo!!!" << endl;
	} else {
		distancia12 = distancia_entre_a_e_b (x1, y1, x2, y2);
		distancia34 = distancia_entre_a_e_b (x3, y3, x4, y4);
		perimetro = 2*(distancia12 + distancia34);
		area = distancia12*distancia34;
		cout << " A area e o perimetro do retangulo sao respectivamente: " << area << " , " << perimetro << endl;
		
	}
	return 0
}
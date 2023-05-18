#include<iostream>
#include <iomanip>
#include <cstdlib>
#include "Produto.h"

using namespace std;

int main(){
	Produto a;
	a.preencherCampos();
	a.imprime();
	return 0;
}

#include "Produto.h"

Produto::Produto() {
    this->codigo = -1;
    this->preco = 0.0;
    this->custo = 0.0;
    this->estoques = 0;
}

Produto::Produto(Produto& outro) {
    this->codigo = outro.getCodigo();
    this->preco = outro.getPreco();
    this->custo = outro.getCusto();
    this->estoques = outro.getEstoques();
}

void Produto::setPreco(float preco){
    this->preco = preco;
}

float Produto::getPreco(){
    return this->preco;
}

void Produto::setCusto(float custo){
    this->custo = custo;
}

float Produto::getCusto(){
    return this->custo;
}

void Produto::setEstoques(int estoques){
    this->estoques = estoques;
}

int Produto::getEstoques(){
    return this->estoques;
}

void Produto::setCodigo(int codigo){
    this->codigo = codigo;
}

int Produto::getCodigo(){
    return this->codigo;
}

void Produto::imprime(){
    cout << "---------------------------------------------------" << endl;
    cout << "Codigo: " << this->codigo << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Custo: " << this->custo << endl;
    cout << "Estoque: " << this->estoques << endl;
    cout << "---------------------------------------------------" << endl;
}

void Produto::preencherCampos(){
    cout << "------------------Preenchimento de produto-------------------" << endl;
    cout << "Informe o Codigo: ";
    cin >> this->codigo;
    cout << "Informe o preco: ";
    cin >> this->preco;
    cout << "Informe o custo: ";
    cin >> this->custo;
    cout << "Informe o estoque: ";
    cin >> this->estoques;
}

Produto::~Produto() {
}


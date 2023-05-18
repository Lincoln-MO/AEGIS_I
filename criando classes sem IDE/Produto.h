
#ifndef PRODUTO_H
#define PRODUTO_H

#include<iostream>

using namespace std;

class Produto {
public:
    Produto();
    Produto(Produto& orig);
    virtual ~Produto();
    void setPreco(float preco);
    float getPreco();
    void setCodigo(int codigo);
    int getCodigo();
    void setCusto(float custo);
    float getCusto();
    void setEstoques(int estoques);
    int getEstoques();
    
    void imprime();
    void preencherCampos();
    
private:
    int codigo;
    float preco;
    float custo;
    int estoques;

};

#endif /* PRODUTO_H */


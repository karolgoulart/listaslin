typedef struct caixa{ 
    int valor;
    caixa* prox;
} caixa; 

void exibe(caixa* caixa){
    while(caixa!= NULL){
        printf("%d", caixa->valor);
        caixa=caixa->prox;
    }
}

int main (){
    caixa c1,c2,c3,c4,c5;

    c1.valor= 1;
		c2.valor= 3;
		c3.valor= 9;
		c4.valor= 7;
		c5.valor= 5;

		c1.prox= &c2;
		c2.prox= &c3;
		c3.prox= &c4;
		c4.prox= &c5;
		c5.prox= NULL;

		caixa* inicio= &c1;
    //exibe todos os elementos
    exibe (inicio);
    caixa* cabeca= inicio;
    caixa* ant= cabeca;
    caixa*remove;
    for (int i; i<1; i++){
        ant= ant->prox;
    }
    //desencaixa a c3
    remove=ant->prox;
    ant->prox=remove->prox;
    remove->prox=NULL;

    //sem o valor 9
    exibe(cabeca);

    //insere a caixa removida no inicio da lista
    remove->prox=cabeca;
    cabeca=remove;

    exibe (cabeca);
    return 0;
}

  
		exibe (inicio);

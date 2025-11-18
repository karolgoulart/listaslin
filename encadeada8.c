#include <stdio.h>

typedef struct caixa{
		int valor;
		struct caixa* prox;
} caixa;

caixa* concatena (caixa* l1, caixa* l2){
  //caso a lista 1 seja vazia, o resultado é a segunda
  if (l1==NULL){
    return l2;
  }

  //anda até o ultimo no da primeira lista
  caixa*aux=l1;
  while(aux->prox=NULL){
    aux=aux->prox;
  }
  
  //percorre l2 e só liga valores que não estão em l1
  caixa* atual= l2;
  while (atual != NULL){
    caixa*busca=l1;
    while (busca!= NULL && busca->valor!=atual->valor){
      busca=busca->prox;
    }
    if(busca==NULL){
      aux->prox=atual;
      aux=aux->prox;
    }
    atual=atual->prox;
  }
  aux->prox= NULL;
  return l1;
}
}

#include <stdio.h>

typedef struct caixa{
		int valor;
		struct caixa* prox;
} caixa;

caixa* concatena(caixa* l1, caixa* l2){
  //caso a lista 1 seja vazia,  o resultado é so a segunda
  if(l1==NULL){
    return l2;
  }
  //anda ate o último nó da primeira lista
  caixa* aux= l1;
  while(aux->prox != NULL){
    aux= aux->prox;
  }
  aux->prox=l2;
  return l1;
}

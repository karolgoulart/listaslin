#include <stdio.h>

typedef struct caixa{
		int valor;
		struct caixa* prox;
} caixa;

caixa *remove(caixa*lista, int valor){
  if(lista==NULL){
    return NULL;
  }
  if (lista->valor==valor){
    caixa* removida= lista;
    lista= lista->prox
    removida->prox= NULL;
    free(removida);
    return lista;
  }

caixa* ant= lista;
while(ant->prox!=NULL &&ant->prox->valor!=valor){
  ant=ant->prox;
}
if (ant->prox=NULL){
  return lista;
}
caixa*removida=ant->prox;
ant->prox=removida->prox;
removida->prox=NULL;
free(removida); 
return lista;

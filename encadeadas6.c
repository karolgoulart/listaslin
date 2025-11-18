#include <stdio.h>
#include <stdlib.h>

typedef struct caixa{
		int valor;
		struct caixa* prox;
} caixa;

caixa* insere( caixa*lista, int valor){
  caixa*nova= malloc(sizeof(caixa));
  nova->valor=valor;
  nova->prox=NULL;

  if (lista==NULL || valor<lista->valor){
    nova->prox=lista;
    return nova;
  }
  caixa* ant=lista;
  while(ant->prox!=NULL && ant->prox->valor < valor){
    ant=ant->prox;
  }
  nova->prox= ant->prox;
  ant->prox=nova;
  return lista;
}

#include<stdio.h>

typedef struct caixa{
		int valor;
		struct caixa* prox;
} caixa;

int contem(caixa* lista, int valor){
  while(lista!=NULL){
      if(lista->valor==valor){
          return 1;  //encontrou
      }
      lista=lista->prox;
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* O conceito de pilha se trata de um conceito LIFO last in first out, 
então pensando nessa condição toda vez que formos inserir ou retirar um produto
vamos realizar essa função pelo topo da pilha, logo para iniciarmos o conceito de uma pilha precisamos 
definir sua estrutura preceferncialmente dinamica e encadeada incluindo um apontamento para o seu topo*/

typedef struct no{ //aqui esta definido que minha estrutura tem umn elemento do tipo float e um ponterio, nomeado como topo pois esta apontando para o topo da pilha 
    float elemento;
    no *topo;
}No;

/*apos realizar a estrutura do pilha podemos criar a mesma */
No* criar(void){
    No* p;
    p = (No*) malloc(sizeof(No));
    p->topo = NULL;
    p->elemento = 0;
    return p;
}


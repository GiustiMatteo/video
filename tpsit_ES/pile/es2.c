/*
Matteo Giusti
programma che chieda all’utente una stringa composta da parentesi aperte e chiuse:
(,),[,],{,} e che verifichi se le coppie e l’ordine delle (,),[,],{,} sono corretti. Utilizzare uno stack.

{[]()} -> corretta
{]} -> non corretta
{}{}() -> corretta
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct El{
    char valore;
    struct El* next;
}El;

void push(struct El** pila, struct El* element){
    if(&pila == NULL){
        *pila = element;
        element->next = NULL;
    }else{
        element->next = *pila;
        *pila = element;
    }
}

struct El* pop(struct El** pila){
    struct El* ret = *pila;
    if(&pila == NULL)
      return NULL;
    else *pila = ret->next;

    return ret;
}

int main(){
    struct El* pila         ;
    struct El* element;
    struct El* ret;

    bool correct = true;    //divanta false se incotra una parentesi chiusa diversa da quella aperta

    char espressione[1000]; //stringa da verificare

    printf("inserisci la serie di parentesi:\n");
    fflush(stdin);
    scanf("%s" , espressione);

    //a seconda che la parentesi sia aperta o chiusa carico o tolgo un elemento nell pila
    for (int i = 0; espressione[i] != '\0' && correct; i++){
        if(espressione[i] == '(' || espressione[i] == '[' || espressione[i] == '{' || espressione[i] == ')' || espressione[i] == ']' || espressione[i] == '}'){
            element = (struct El*) malloc(sizeof(struct El));
            element->valore = espressione[i];
            push(&pila,element);
        }
        if(espressione[i] == ']' || espressione[i] == '}'){
            ret = pop(&pila);
            if(ret->valore != pila->valore+2)
              correct = false;
            else
              ret = pop(&pila);
        }
        if(espressione[i] == ')'){
            ret = pop(&pila);
            if(ret->valore != pila->valore+1)
              correct = false;
            else
              ret = pop(&pila);
        }
    }

    if(correct)
      printf("espressione inserita correttamente");
    else
      printf("espressione errata");
    return 0;
}

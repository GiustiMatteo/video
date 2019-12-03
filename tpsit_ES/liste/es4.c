/*
    definire una funzione deallocaLista che riceve una ListaDiElementi e ne dealloca tutti gli elementi
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct EL{
    int valore;
    struct EL* next;
};

void deallocaLista(struct EL** lista){
  struct EL* l;

  while(&lista != NULL){
    l = *lista;
    *lista = *(lista)->next;
    free(l);
  }
}

int main(){
    int elementi = 0;    //numero di elementi nella lista
    int n;
    struct EL* lista;
    struct EL* l;
    lista=NULL; /* inizializzo a NULL, primo elemenot della lista */

    do
    {
        printf("Inserisci un naturale oppure -1 per terminare\n");
        scanf("%d",&n);

        if (n>=0)
        {
            if (lista==NULL) /* controllo se esiste solo una struttura */
            {
                /* alloco lo spazio per una struttura */
                lista = (struct EL*) malloc(sizeof(struct EL));
                l = lista;
            }
            else /* se il puntatore lista è diverso da NULL*/
            {
                /*assegno al puntatore l dell'elemento corrente un puntatore che punta all'elemento successivo*/
                l->next = (struct EL*) malloc(sizeof(struct EL));
                l = l->next;
            }

            l->valore = n; /* assegno n al campo dell'elemento corrente*/
            l->next = NULL; /* assegno al campo next dell'elemento corrente NULL */
        }
    } while (n>=0);

    l=lista; /* assegno alla variabile di appoggio l il puntatore al primo elemento della lista */

    deallocaLista(lista);

    return 0;
}

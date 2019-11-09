/*
nome:Matteo Giusti
es:02
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int chiediDim();
void caricaVet(int vet[], int dim);
int maggiore(int vet[], int dim);

int main(){
    int *vet;
    int dim,max;

    dim = chiediDim();
    vet = malloc(sizeof(int)*dim);
    caricaVet(vet, dim);
    max = maggiore(vet, dim);
    printf("\nValore maggiore: %d", max);

}

int chiediDim(){
    int i;
    do{
    printf("\nInserisci la dimensione del vettore: ");
    scanf("%d", &i);
  }while(i<=0);
    return i ;
}

void caricaVet(int *vet, int dim){
    int i;
    srand(time(NULL));
    for(i=0;i<dim;i++){
        *(vet + i) = rand() % 101 - 1;
    }
}

int maggiore(int *vet, int dim){
    int max,i;
    max=-1;
    for(i=0;i<dim;i++){
        if( *(vet + i) > max){
            max = *(vet + i);
        }
    }
    return max;
}

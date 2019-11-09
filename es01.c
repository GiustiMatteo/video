/*
nome:Matteo Giusti
es:01
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

int main(){
  int dim;
  printf("inserisci la dimensione di n: ");
  scanf("%d",&dim);
  int *p =(int *)malloc(dim*sizeof(int));

   if(*p == NULL){
        printf("error");
        return -1;
   }
   //srand(time(0));
  for(int i = 0; i < dim ;i++){
    printf("\ninserisci l elemento alla cella [%d]= ",p[i]);
        scanf("%d",p+i);
  // upl[i] =rand()%100+1

  }

  free(p);


}

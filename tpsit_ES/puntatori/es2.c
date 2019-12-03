/*
nome:Matteo Giusti
es 02
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  int i;
  float ar;

  printf("quanti numeri vuoi? ");
  scanf("%d", &n);

  float *vet=(float*)malloc(n*sizeof(float));
  printf("\n");

  for(i=0; i<n; i++){
      printf("Inserisci il numero nella cella [%d]: ", i);
      scanf("%f", vet + i);
   }
   for(i=0; i<n; i++){
     printf("%f \t", *(vet+i));
   }
   ar=vet[0];
   for(i=0; i<n; i++){
     if(*(vet+i)>ar) {
       ar=*(vet+i);
     }
   }
   printf("\nIl maggiore e' %f", ar);
  return 0;
}

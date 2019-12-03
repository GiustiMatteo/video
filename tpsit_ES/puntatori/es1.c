/*
Matteo Giusti
es1
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
int* vet;
int n;

do{
printf("dimensione: " );
scanf("%d",&n);
}while(n < 0);

vet = (int*)malloc(sizeof(int)*n);
if(vet == NULL){
  printf("errore allocazione di memoria");
  return -1;
}
for(int i = 0;i < n;i++){
  printf("inserisci il valore della cella %p: ", vet + i );
  scanf("%d",vet + i );
}
for(int i = 0;i < n;i++){
  printf(" valore alla cella %p: %d\n", vet + i ,*(vet + i)
);

}
free(vet);

  return 0;
}

/*
nome:Matteo Giusti
es:03
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 20   //lunghezza max di un vet di char

int main() {
  char str[LUNG];
  int i = 0;
  char *s;

  printf("Inserisci la stringa : ");
  scanf("%s", str);

  s=str;
  while (*s!='\0') {
    i++;
    s++;
  }

  printf("La lunghezza della stringa e' %d", i);
  return 0;
}

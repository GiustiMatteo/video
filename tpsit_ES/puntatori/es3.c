/*
Matteo Giusti
write a program in c to calculate the length of a string
*/
#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main(){
    char* string;
    int length = 0;

    string = (char*) malloc(50*sizeof(char));

    printf("inserisci la stringa : \n");
    gets(string);
    printf("string = %s" , string);

    while(*string!='\0'){
        length++;
        string++;
    }

    printf("\nLunghezza = %d" , length);


    fflush(stdin);
    return 1;
}

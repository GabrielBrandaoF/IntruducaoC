#include <stdio.h>

int main (){
 int numeros[5] = {10,20,30,40,50};
 int *ptr_numeros;

 ptr_numeros = numeros;

 printf("O primeiro numero da array eh: %d\n", *ptr_numeros);

 printf("Os valores da array percorridos pelo ponteiros: \n");
   for(int i=0; i<5; i++){
    printf("Elemento %d\n", *(ptr_numeros+i));
   }
return 0;
    
}
#include <stdio.h>


int main(){
 int num1, num2, som, sub, mul, res;
 float div;
   printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

   som=num1+num2;
   sub=num1-num2;
   mul=num1*num2;

   div= (float) num1/num2;

   res= num1%num2;

   printf("A soma, subtracao, multiplicacao, divisao e resto, respectivamente, sao:\n %d\n %d\n %d\n %.2f\n %d\n",som, sub, mul, div, res);
   return 0;


    
}
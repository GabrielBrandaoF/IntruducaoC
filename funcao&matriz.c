#include <stdio.h>

void preenchermatriz(int matriz [3][3]);

int main (){
 int minhamatriz[3][3];

 preenchermatriz(minhamatriz);

 printf("-----Matriz Preenchida-----\n");
  for(int i=0;i<3;i++){
    for (int j=0; j<3; j++){
        printf(" %d", minhamatriz[i][j]);
    }
   printf("\n"); 
  }

return 0;

}

void preenchermatriz(int matriz [3][3]){
 printf("Digite 9 numeros para preencher a matriz 3x3:\n");
 for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("Digito [%d][%d]: ", i,j);
         scanf("%d", &matriz[i][j]);
    }
 }
}
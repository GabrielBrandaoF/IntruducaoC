#include <stdio.h>
#include <ctype.h>

int main(){
    char inicial, inicialM;
 printf("Digite a letra inicial do seu estado: ");
 scanf(" %c", &inicial);

 inicialM = tolower(inicial);

 switch (inicialM) {
 case 'a':
  printf("O seu estado eh um dos citados: Acre (AC), Alagoas (AL), Amapá (AP), Amazonas (AM)");
    break;
 case 'b':
  printf("O seu estado eh a Bahia (BA)");
    break;
 case 'c':
  printf("O seu estado eh o Ceara (CE)");
    break;
 case 'd':
  printf("O seu estado eh o Distrito Federal (DF)");
    break;
 case 'e':
 printf("O seu estado eh o Espirito Santo (ES)");
    break;
 case 'g':
 printf("O seu estado eh o Goias (GO)");
    break;   
 case 'm':
  printf("O seu estado eh um dos citados: Maranhao (MA), Mato Grosso (MT), Mato Grosso do Sul (MS), Minas Gerais (MG)");
    break;
 case 'p':
  printf("O seu estado eh um dos citados: Para (PA), Paraiba (PB), Parana (PR), Pernambuco (PE), Piaui (PI)");
    break;
 case 'r':
  printf("O seu estado eh um dos citados: Rio de Janeiro (RJ), Rio Grande do Norte (RN), Rio Grande do Sul (RS), Rondonia (RO), Roraima (RR)");
  break; 
 case 's':
  printf("O seu estado eh um dos citados: Santa Catarina (SC), Sao Paulo (SP), Sergipe (SE)");
  break;   
 case 't':
  printf("O seu estado eh o Tocantins (TO)");
  break;
 default:
 printf("Nao existe estado brasileiro com esse inicial.");
    break;
 }
return 0;
}
#include <stdio.h>



int main() {

 //Carta:1
 char estado[10];
 char codigo[50];
 char cidade[50];
 int populacao;
 float area;
 float pib;
 int turisticos;

printf("Carta:1 \n");
printf("Digite o Estado:  \n");
scanf("%s", &estado);

printf("Digite o Codigo:  \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade:  \n");
scanf("%s", &cidade);

printf("Digite a populacao: \n");
scanf("%d", &populacao);

printf("Digite a area: \n");
scanf("%f", &area);

printf("Digite o Pib:  \n");
scanf("%f", &pib);

printf("Digite os pontos turisticos: \n");
scanf("%d", &turisticos);

printf("\nCarta:1\n");

printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Area: %f Km² \n", area);
printf("PIB: %f bilhões de reais \n", pib);
printf("Numero de Pontos Turisticos: %d\n", turisticos);


//Carta:2;
char estado2[10]; 
char codigo2[50];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int turisticos2;

printf("\nCarta:2 \n");

printf("Digite o estado: \n");
scanf("%s", &estado2);

printf("Digite o codigo: \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade2);

printf("Digite a populacao: \n");
scanf("%d", &populacao2);

printf("Digite a area: \n");
scanf("%f", &area2);

printf("Digite o pib: \n");
scanf("%f", &pib2);

printf("Digite os pontos turisticos: \n");
scanf("%d", &turisticos2);


printf("\nCarta:2 \n");

printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Area: %f Km² \n", area2);
printf("PIB: %f bilhões de reais \n", pib2);
printf("Numero de Pontos Turisticos: %d\n", turisticos2);

return 0;


}

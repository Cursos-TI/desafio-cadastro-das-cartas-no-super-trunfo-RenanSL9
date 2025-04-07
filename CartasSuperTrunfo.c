##include <stdio.h>

int main (){

    //Carta:1
    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float pib_capita;

printf("Carta:1 \n");
printf("Digite o Estado:  \n");
scanf("%c", &estado);

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

densidade = populacao / area;
pib_capita = pib / populacao;

printf("\nCarta:1\n");

printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f Km² \n", area);
printf("PIB: %.2f bilhões de reais \n", pib);
printf("Número de Pontos Turísticos: %d\n", turisticos);
printf("Densidade Populacional: %.2f Hab/km² \n", densidade);
printf("PIB per Capita: %.2f reais \n", pib_capita);

//Carta:2;
char estado2[2]; 
char codigo2[50];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int turisticos2;
float densidade2;
float pib_capita2;

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

densidade = populacao2 / area2;
pib_capita = pib2 / populacao2;

printf("\nCarta:2 \n");

printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km² \n", area2);
printf("PIB: %.2f bilhoes de reais \n", pib2);
printf("Número de Pontos Turísticos: %d\n", turisticos2);
printf("Densidade Populacional: %.2f Hab/km² \n", densidade2);
printf("PIB per Capita: %.2f reais \n", pib_capita2);

return 0;

}
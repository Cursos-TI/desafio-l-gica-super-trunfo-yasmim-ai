#include <stdio.h>

int main(){

  //Carta 1
    char estado1;
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int nunpontos1;
    float densipopu1;
    float PIBperCapita1;
    float densiInverso1;
 
  //Carta 2
    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int nunpontos2;
    float densipopu2;
    float PIBperCapita2;
    float densiInverso2;

    int escolha;


  //Apresentação do jogo

    printf("         ---- Super Trunfo ----\n");

  //Criação da carta 1

    printf("Insira os dados da carta 1 \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &nunpontos1);

    printf("\n");

    printf("   ===== Dados coletados =====");

   densipopu1 = populacao1/area1;
   PIBperCapita1 = PIB1/populacao1;
   densiInverso1 = 1/densipopu1;

  //Espaço entre a coleta de dados

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

  //Criação da carta 2

   

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &nunpontos2);

    printf("   ===== Dados coletados =====");

   densipopu2 = populacao2/area2;
   PIBperCapita2 = PIB2/populacao2;
   densiInverso2 = 1/densipopu2;

  //Espaço entre coleta de dados e apresentação

    printf("\n");
    printf("\n");
    printf("\n");

  // Área para exibição dos dados da cidade

  //Apresentação das cartas
    printf("Carta 1:");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", nunpontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densipopu1);
    printf("PIB por Capita: %.2f reais \n", PIBperCapita1);
  
  //Espaço entre coleta de dados e apresentação

    printf("\n");
    printf("\n");
    printf("\n");
  
  
  //Apresentação da carta 2
  
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f milhões de reias \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", nunpontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu2);
    printf("PIB por Capita: %.2f reais\n", PIBperCapita2);

  //Espaço entre a apresentação das cartas e a comparação

    printf("\n");
    printf("\n");
    printf("\n");

  //Escolha de atributos para comparação

    printf("### Escolha um atributo para comparar ### \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demoragráfica \n");
    scanf("%d", &escolha);

  
  //Resultado da comparação entre as cartas 

    switch (escolha) {
    case 1:
      if (populacao1 > populacao2) {
        printf("Carta 1 %s ganhou!! \n", cidade1);
      } else if (populacao1 == populacao2){
        printf("*** EMPATE!! *** \n");
      } else {
        printf("Carta 2 %s ganhou!! \n", cidade2);
      }
      break;
    case 2:
      if (area1 > area2) {
        printf("Carta 1 %s ganhou!! \n", cidade1);
      } else if (area1 == area2){
        printf("*** EMPATE!! *** \n");
      } else {
        printf("Carta 2 %s ganhou!! \n", cidade2);
      }
      break;
    case 3:
      if (PIB1 > PIB2) {
        printf("Carta 1 %s ganhou!! \n", cidade1);
      } else if (PIB1 == PIB2){
        printf("*** EMPATE!! *** \n");
      } else {
        printf("Carta 2 %s ganhou!! \n", cidade2);
      }
      break;
    case 4:
      if (nunpontos1 > nunpontos2) {
        printf("Carta 1 %s ganhou!! \n", cidade1);
      } else if (nunpontos1 == nunpontos2){
        printf("*** EMPATE!! *** \n");
      } else {
        printf("Carta 2 %s ganhou!! \n", cidade2);
      }
      break;
    case 5:
      if (densipopu1 > densipopu2) {
        printf("Carta 1 %s ganhou!! \n", cidade1);
      } else if (densipopu1 == densipopu2){
        printf("*** EMPATE!! *** \n");
      } else {
        printf("Carta 2 %s ganhou!! \n", cidade2);
      }
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }





 0;




}
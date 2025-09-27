#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
        //aqui são criadas as variáveis, ou seja, vamos criar os locais onde as informações serão organizadas, com nomes claros e significativos. 
        // além das variáveis, são definidos também os tipos de dados de cada variável. 
    //Carta 1

    char estado1;
    char codigo1[4];
    char nomeCidade1[50]; 
    int populacao1; 
    float area1; 
    float pib1; 
    int pontos_turisticos1; 

     //Carta 2

    char estado2;
    char codigo2[4];
    char nomeCidade2[50]; 
    int populacao2; 
    float area2; 
    float pib2; 
    int pontos_turisticos2;    

  // Área para entrada de dados

// Carta 1 

printf("Carta 1: \n");

printf("Estado (escolha  uma letra de A a H): "); 
scanf("%c", &estado1); 

printf("Codigo (a letra do estado seguida de um numero de 01 a 04): "); 
scanf("%s", &codigo1);

printf("Nome da cidade: ");
scanf("%s", &nomeCidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Area: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontos_turisticos1);

// Carta 2 

printf("Carta 2: \n");

printf("Estado (escolha  uma letra de A a H): "); 
scanf("%c", &estado2); 

printf("Codigo (a letra do estado seguida de um numero de 01 a 04): "); 
scanf("%s", &codigo2);

printf("Nome da cidade: ");
scanf("%s", &nomeCidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade 

// Carta 1 
printf("\nCarta 1: \n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Area: %f\n", area1); 
printf("PIB: %f\n", pib1);
printf("Numero de Pontos Turiticos: %d\n", pontos_turisticos1); 



// Carta 2 
printf("\nCarta 2: \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Area: %f\n", area2); 
printf("PIB: %f\n", pib2);
printf("Numero de Pontos Turiticos: %d\n", pontos_turisticos2); 

return 0;
} 

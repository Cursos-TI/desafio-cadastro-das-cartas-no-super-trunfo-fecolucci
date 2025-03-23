#include <stdio.h> //Biblioteca padrão
#include <string.h> //Biblioteca necessária para usar strcspn

int main(){

    // Variáveis carta 1
    char estado1, codigo1[4], cidade1[50]; 
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_percapta1;

    // Variáveis carta 2
    char estado2, codigo2[4], cidade2[50]; 
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_percapta2;

        //Entrada de dados do usuário com orientações

        //Carta 1

        printf ("Carta 1\n");

        printf ("Insira o Estado: \n");
        scanf (" %c", &estado1);

        printf ("Insira o Código da Carta: \n");
        scanf ("%s", codigo1);

        getchar(); //Limpa o buffer antes do fgets

        printf ("Insira o Nome da Cidade: \n");
        fgets(cidade1, sizeof(cidade1), stdin); //Permite a inclusão de uma linha inteira na entrada de dados
        cidade1[strcspn(cidade1, "\n")] = 0; //Remove a quebra de linha

        printf ("Insira a População: \n");
        scanf ("%d", &populacao1);

        printf ("Insira a Área em km²: \n");
        scanf ("%f", &area1);

        printf ("Insira o PIB: \n");
        scanf ("%f", &pib1);

        printf ("Insira o Número de Pontos Turísticos: \n");
        scanf ("%d", &pontos_turisticos1);

        //calculos após entradas

        densidade1 = (float) populacao1 / area1;
        pib_percapta1 = (float) pib1 / populacao1;

        //Carta 2
        
        printf ("Carta 2\n");

        printf ("Insira o Estado: \n");
        scanf (" %c", &estado2);

        printf ("Insira o Código da Carta: \n");
        scanf ("%s", codigo2);

        getchar(); //Limpa o buffer antes do fgets

        printf ("Insira o Nome da Cidade: \n");
        fgets(cidade2, sizeof(cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = 0;

        printf ("Insira a População: \n");
        scanf ("%d", &populacao2);

        printf ("Insira a Área em km²: \n");
        scanf ("%f", &area2);

        printf ("Insira o PIB: \n");
        scanf ("%f", &pib2);

        printf ("Insira o Número de Pontos Turísticos: \n");
        scanf ("%d", &pontos_turisticos2);

        //calculos após entradas

        densidade2 = (float) populacao2 / area2;
        pib_percapta2 = (float) pib2 / populacao2;


        //Saída de dados de forma estruturada e organizada

        //Carta 1

        printf ("Carta 1\n");

        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per Capta: %.2f\n", pib_percapta1);

        //Carta 2

        printf ("Carta 2\n");

        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per Capta: %.2f\n", pib_percapta2);


        return 0;

}
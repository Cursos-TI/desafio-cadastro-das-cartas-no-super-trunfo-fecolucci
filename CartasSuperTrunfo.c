#include <stdio.h> //Biblioteca padrão
#include <string.h> //Biblioteca necessária para usar strcspn

int main(){

    // Variáveis carta 1
    char estado1, codigo1[4], cidade1[50]; 
    int pontos_turisticos1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_percapta1, super_poder1;

    // Variáveis carta 2
    char estado2, codigo2[4], cidade2[50]; 
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_percapta2, super_poder2;

    // Variáveis para comparação

    int comparacao_pontos_turisticos;
    unsigned long int comparacao_populacao;
    float comparacao_area, comparacao_pib, comparacao_densidade, comparacao_pib_percapta, comparacao_super_poder;

        //Entrada de dados do usuário com orientações

        //Carta 1

        printf ("*****CARTA 1*****\n");

        printf ("Insira o Estado: \n");
        scanf (" %c", &estado1);

        printf ("Insira o Código da Carta: \n");
        scanf ("%s", codigo1);

        getchar(); //Limpa o buffer antes do fgets

        printf ("Insira o Nome da Cidade: \n");
        fgets(cidade1, sizeof(cidade1), stdin); //Permite a inclusão de uma linha inteira na entrada de dados
        cidade1[strcspn(cidade1, "\n")] = 0; //Remove a quebra de linha

        printf ("Insira a População: \n");
        scanf ("%lu", &populacao1);

        printf ("Insira a Área em km²: \n");
        scanf ("%f", &area1);

        printf ("Insira o PIB: \n");
        scanf ("%f", &pib1);

        printf ("Insira o Número de Pontos Turísticos: \n");
        scanf ("%d", &pontos_turisticos1);

        //calculos após entradas

        densidade1 = (float) populacao1 / area1;
        pib_percapta1 = (float) pib1 / populacao1;
        super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_percapta1 + (1 / densidade1);

        printf("                                       \n"); //Espaço

        //Carta 2
        
        printf ("*****CARTA 2*****\n");

        printf ("Insira o Estado: \n");
        scanf (" %c", &estado2);

        printf ("Insira o Código da Carta: \n");
        scanf ("%s", codigo2);

        getchar(); //Limpa o buffer antes do fgets

        printf ("Insira o Nome da Cidade: \n");
        fgets(cidade2, sizeof(cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = 0;

        printf ("Insira a População: \n");
        scanf ("%lu", &populacao2);

        printf ("Insira a Área em km²: \n");
        scanf ("%f", &area2);

        printf ("Insira o PIB: \n");
        scanf ("%f", &pib2);

        printf ("Insira o Número de Pontos Turísticos: \n");
        scanf ("%d", &pontos_turisticos2);

        //calculos após entradas

        densidade2 = (float) populacao2 / area2;
        pib_percapta2 = (float) pib2 / populacao2;
        super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_percapta2 + (1 / densidade2);   

        //Saída de dados de forma estruturada e organizada

        printf("                                       \n"); //Espaço

        //Carta 1

        printf ("*****CARTA 1*****\n");

        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f bilhões\n", pib1 / 1e9);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capta: R$ %.2f\n", pib_percapta1);
        printf("Super poder: %.f\n", super_poder1);

        //Linha de separação

        printf("                                       \n");
        printf("---------------------------------------\n");
        printf("                                       \n");

        //Carta 2

        printf ("*****CARTA 2*****\n");

        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", pib2 / 1e9);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capta: R$ %.2f\n", pib_percapta2);
        printf("Super poder: %.f\n", super_poder2);

        printf("                                       \n");
        printf ("*****O GRANDE VENCEDOR*****\n");
        printf("                                       \n");

        //Comparação das cartas

        comparacao_populacao = populacao1 > populacao2;
        printf("População: %lu\n", comparacao_populacao);

        comparacao_area = area1 > area2;
        printf("Área: %.f\n", comparacao_area);

        comparacao_pib = pib1 > pib2;
        printf("PIB: %.f\n", comparacao_pib);

        comparacao_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
        printf("Pontos Turísticos: %d\n", comparacao_pontos_turisticos);

        comparacao_densidade = densidade1 < densidade2;
        printf("Densidade: %.f\n", comparacao_densidade);

        comparacao_pib_percapta = pib_percapta1 > pib_percapta2;
        printf("PIB per Capta: %.f\n", comparacao_pib_percapta);

        comparacao_super_poder = super_poder1 > super_poder2;
        printf("Super Poder: %.f\n", comparacao_super_poder);


        printf("                                       \n");
        printf("---------------------------------------\n");
        printf ("**************FIM DO JOGO**************\n");







        return 0;

}
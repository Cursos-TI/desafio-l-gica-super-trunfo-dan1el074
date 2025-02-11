#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int menu() {
    int opcao;
    int mostrarMenu = 1;
    
    while(mostrarMenu) {
        printf("----- MENU -----\n");
        printf("1- Iniciar jogo\n");
        printf("2- Regras\n");
        printf("3- Sair\n");

        printf("\nEscolha um opção: ");
        scanf("%d", &opcao);
        while(getchar() != '\n'); // limpa o buffer

        switch(opcao) {
            case 1:
                mostrarMenu = 0;
                break;
            case 2:
                printf("Cadastre 2 cidades e batalhe escolhendo qual o atributo ganhará.\n\n");
                break;
            case 3:
                printf("Jogo encerrado!\n\n----------------------------------\n");
                return 1;
        }
    }

    return 0;
}

int jogo() {
    int opcao;
    int mostrarMenu = 1;

    char estado1;
    char codigo1[4];
    char nome1[20];
    int populacao1;
    float area1;
    float densidadePopulacional1;
    float pib1;
    float pibPerCapita1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float densidadePopulacional2;
    float pib2;
    float pibPerCapita2;
    int pontosTuristicos2;

    // Carta 1
    printf("\n----- Cadastro da cidade 1 -----\n");
    
    printf("Digite o código do estado [A-H]: ");
    scanf("%c", &estado1);
    while(getchar() != '\n'); 

    printf("Digite o código da carta [A01-H04]: ");
    scanf("%3[^\n]", codigo1);
    while(getchar() != '\n'); 

    printf("Digite o nome da cidade: ");
    scanf("%19[^\n]", nome1);
    while(getchar() != '\n'); 

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);
    while(getchar() != '\n'); 

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    while(getchar() != '\n');

    printf("Digite o número do PIB (em bilhões): ");
    scanf("%f", &pib1);
    while(getchar() != '\n'); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    while(getchar() != '\n'); 

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Visualização
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("PIB per Capita: %.0f reais\n", pibPerCapita1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Carta 2
    printf("\n----- Cadastro da cidade 2 -----\n");
    
    printf("Digite o código do estado [A-H]: ");
    scanf("%c", &estado2);
    while(getchar() != '\n'); 

    printf("Digite o código da carta [A01-H04]: ");
    scanf("%3[^\n]", codigo2);
    while(getchar() != '\n'); 

    printf("Digite o nome da cidade: ");
    scanf("%19[^\n]", nome2);
    while(getchar() != '\n'); 

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    while(getchar() != '\n'); 

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    while(getchar() != '\n');

    printf("Digite o número do PIB (em bilhões): ");
    scanf("%f", &pib2);
    while(getchar() != '\n'); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    while(getchar() != '\n');

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Visualização
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("PIB per Capita: %.0f reais\n", pibPerCapita2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Jogar
    while(mostrarMenu) {
        printf("\n----- Hora de Jogar -----\n");
        printf("1- Comparar população\n");
        printf("2- Comparar área\n");
        printf("3- Comparar densidade populacional\n");
        printf("4- Comparar PIB\n");
        printf("5- Comparar PIB per Capita\n");
        printf("6- Comparar Pontos Turísticos\n");
        printf("7- Sair\n");1

        printf("\nEscolha um opção: ");
        scanf("%d", &opcao);
        while(getchar() != '\n');

        switch(opcao) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("\n%s tem maior população.\n", nome1);
                } else {
                    printf("\n%s tem maior população.\n", nome2);
                }
                break;

            case 2:
                if (area1 > area2) {
                    printf("\n%s tem maior área.\n", nome1);
                } else {
                    printf("\n%s tem maior área.\n", nome2);
                }
                break;

            case 3:
                if (densidadePopulacional1 > densidadePopulacional2) {
                    printf("\n%s tem maior densidade populacional.\n", nome1);
                } else {
                    printf("\n%s tem maior densidade populacional.\n", nome2);
                }
                break;

            case 4:
                if (pib1 > pib2) {
                    printf("\n%s tem maior PIB.\n", nome1);
                } else {
                    printf("\n%s tem maior PIB.\n", nome2);
                }
                break;

            case 5:
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("\n%s tem maior PIB per Capita.\n", nome1);
                } else {
                    printf("\n%s tem maior PIB per Capita.\n", nome2);
                }
                break;

            case 6:
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("\n%s tem mais Pontos Turísticos.\n", nome1);
                } else {
                    printf("\n%s tem mais Pontos Turísticos.\n", nome2);
                }
                break;
            
            case 7:
                mostrarMenu = 0;
                break;

            default:
                printf("\nNúmero inválido!\n");
        }
    }
}

int main() {
    printf("Super Trunfo - Cidades\n\n");

    if (menu() == 0) {
        jogo();
    }

    printf("\nJogo finalizado!\n");
    return 0;
}

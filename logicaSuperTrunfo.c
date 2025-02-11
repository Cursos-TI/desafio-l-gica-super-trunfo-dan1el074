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
    char estado1;
    char codigo1[4];
    char nome1[20];
    int populacao1;
    float area1;
    float densidadePopulacional1;
    float pib1;
    float pibPerCapita1;
    int pontosTuristicos1;

    printf("\n----- Cadastro da cidade 1 -----\n");
    
    printf("Digite o código do estado [A-H]: ");
    scanf("%c", &estado1);
    while(getchar() != '\n'); 

    printf("Digite o código da carta [A01-H04]: ");
    scanf("%3s", codigo1);
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
}

int main() {
    printf("Super Trunfo - Cidades\n\n");

    if (menu() == 0) {
        jogo();
    }

    return 0;
}

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
    printf("Jogo iniciado");
}

int main() {
    printf("Super Trunfo - Cidades\n\n");

    if (menu() == 0) {
        jogo();
    }
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

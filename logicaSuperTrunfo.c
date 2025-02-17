#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {



    #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
    int opcao_menu;
    int opcao_comparacao;
    char codigo_carta_vencedora[4];


    char estado_1 ;
    char codigo_1[4];
    char cidade_1[100];
    unsigned int populacao_1;
    float area_1;
    float pib_1;
    unsigned int pontos_turisticos_1;
    float densidade_1; // populacao / area
    float pib_p_capta_1; // pib / populacao

    char estado_2;
    char codigo_2[4];
    char cidade_2[100];
    unsigned int populacao_2;
    float area_2;
    float pib_2;
    unsigned int pontos_turisticos_2;
    float densidade_2; // populacao / area
    float pib_p_capta_2; // pib / populacao


    
    printf("Bem vindo ao Super Trunfo\n");

    printf("Digite a opção desejada para iniciar?\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao_menu);


    switch (opcao_menu) {
        case 1:
            printf("Iniciando o jogo...\n");
            // Código para iniciar o jogo
            printf("Vamos iniciar cadastrando as informação das cartas disponíveis\n");
            printf("Cada carta representa uma cidade diferente\n");
            printf("Vamos começar, digite as informações da primeira cidade!\n");
            printf("Qual o nome da cidade?\n");
            scanf("%s", cidade_1);
            printf("Qual a primeira letra do Estado/UF desta cidade?\n");
            scanf(" %c", &estado_1);
            printf("Quantos habitantes residem nesta cidade?\n");
            scanf("%d", &populacao_1);
            printf("Qual a àrea territorial desta cidade?\n");
            scanf("%f", &area_1);
            printf("Qual o PIB da cidade?\n");
            scanf("%f", &pib_1);
            printf("Quantos pontos turísticos essa cidade tem?\n");
            scanf("%d", &pontos_turisticos_1);

        


            printf("Pronto, a primeira cidade foi cadastrada\n");
            printf("Agora vamos cadastras a segunda cidade!\n");
            printf("Qual o nome da cidade?\n");
            scanf("%s", cidade_2);
            printf("Qual a primeira letra do Estado/UF desta cidade?\n");
            scanf(" %c", &estado_2);
            printf("Quantos habitantes residem nesta cidade?\n");
            scanf("%d", &populacao_2);
            printf("Qual a àrea territorial desta cidade?\n");
            scanf("%f", &area_2);
            printf("Qual o PIB da cidade?\n");
            scanf("%f", &pib_2);
            printf("Quantos pontos turísticos essa cidade tem?\n");
            scanf("%d", &pontos_turisticos_2);
            printf("Pronto, a segunda cidade foi cadastrada\n");
            printf("Vou fazer as comparações e te mostrar quem ganhou em cada \n");


            //cria o codigo da carta
            codigo_1[0] = estado_1;
            codigo_1[1] = '0';
            codigo_1[2] = '1';
            codigo_1[3] = '\0';

            codigo_2[0] = estado_2;
            codigo_2[1] = '0';
            codigo_2[2] = '2';
            codigo_2[3] = '\0';
            
        
            // define campos calculados
            pib_p_capta_1 = pib_1 / populacao_1;
            densidade_1 = populacao_1 / area_1;

            pib_p_capta_2 = pib_2 / populacao_2;
            densidade_2 = populacao_2 / area_2;

            printf("Cartas Cadastradas:\n");
            printf("Código da Carta: %s \n", codigo_1);
            printf("Estado: %c \n", estado_1);
            printf("Nome da Cidade: %s \n", cidade_1);
            printf("Área: %.2f km² \n", area_1);
            printf("Densidade Populacional: %.2f pessoas/km² \n", densidade_1);
            printf("PIB: %.2f bilhões de reais \n", pib_1);
            printf("PIB per Capita: %.2f reais \n", pib_p_capta_1);
            printf("Número de Pontos Turísticos: %d \n", pontos_turisticos_1);

            printf("######################################################\n");
            printf("Código da Carta: %s \n", codigo_2);
            printf("Estado: %c \n", estado_2);
            printf("Nome da Cidade: %s \n", cidade_2);
            printf("Área: %.2f km² \n", area_2);
            printf("Densidade Populacional: %.2f pessoas/km² \n", densidade_2);
            printf("PIB: %.2f bilhões de reais \n", pib_2);
            printf("PIB per Capita: %.2f reais \n", pib_p_capta_2);
            printf("Número de Pontos Turísticos: %d \n", pontos_turisticos_2);

            printf("######################################################\n");

            printf("Qual propriedade você deseja comparar?\n");
            printf("Digite a opção desejada para iniciar?\n");
            printf("1. População\n");
            printf("2. Àrea\n");
            printf("3. PIB\n");
            printf("4. PIB per capta\n");
            printf("5. Densidade Populacional\n");
            printf("6. Quantidade de pontos turisticos\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao_comparacao);
            
            switch (opcao_comparacao) {
                case 1:
                    strcpy(codigo_carta_vencedora, (populacao_1 > populacao_2 ? codigo_1 : codigo_2));
                    break;
                case 2:
                    strcpy(codigo_carta_vencedora, (area_1 > area_2 ? codigo_1 : codigo_2));
                    break;
                case 3:
                    strcpy(codigo_carta_vencedora, (pib_1 > pib_2 ? codigo_1 : codigo_2));
                    break;
                case 4:
                    strcpy(codigo_carta_vencedora, (pib_p_capta_1 > pib_p_capta_2 ? codigo_1 : codigo_2));
                    break;
                case 5:
                    strcpy(codigo_carta_vencedora, (densidade_1 > densidade_2 ? codigo_2 : codigo_1));
                    break;
                case 6:
                    strcpy(codigo_carta_vencedora, (pontos_turisticos_1 > pontos_turisticos_2 ? codigo_1 : codigo_2));
                    break;
            }
            printf("A carta vencedora é a carta de código: %s \n",codigo_carta_vencedora);

            break;
        case 2:
          printf("Regras do Jogo:\n");
          printf("1. Ganha a carta com maio valor numérico para a propriedade escolhida\n");
          printf("2. Exceto para densidade populacional\n");
          break;
        case 3:
          printf("Saindo...\n");
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
      }

    

    



    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
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

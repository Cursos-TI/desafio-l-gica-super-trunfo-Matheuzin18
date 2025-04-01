#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    char estado;
    printf("Digite uma letra para representar o estado: \n");
    scanf("%c" , &estado);
    // Estado que a carta representa

    char codigo[4];
    printf("Digite o codigo da carta (letra do estado seguida de um número entre 01 e 04): \n");
    scanf("%s", &codigo);
    // Código que a carta possui

    char cidade[50];
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    // Cidade que a carta representa

    unsigned long int populacao;
    printf("Digite o número aproximado de habitantes da cidade: \n");
    scanf("%lu", &populacao);
    // Número de habitantes que a cidade possui

    float area;
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);
    // Área da cidade em km²

    float pib;
    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);
    // Produto Interno Bruto (PIB) da cidade
    
    int turistico;
    printf("Digite a quantidade de pontos turísticos que a cidade possui: \n");
    scanf("%i", &turistico);
    // Número de pontos turísticos que a cidade possui

    float DensidadePopulacional = populacao / area;
    // Calcular a Densidade Populacional da cidade

    float pibPerCapita = pib / populacao;
    // Calcular o PIB per capita da cidade

    float DensidadePoder = area / populacao;
    // Calcular o inverso da densidade para calcular o valor do Super Poder da carta

    float SuperPoder = (float) populacao + area + pib + turistico + pibPerCapita + DensidadePoder;
    // Calcular o valor do Super Poder da carta


    char estado2;
    printf("Digite uma letra para representar outro estado: \n");
    scanf("%c" , &estado2);
    //Estado que a carta representa
    
    char codigo2[4];
    printf("Digite o codigo da segunda carta (letra do estado seguida de um número entre 01 e 04): \n");
    scanf("%s", &codigo2);
    // Código que a carta possui
    
    char cidade2[50];
    printf("Digite o nome de outra cidade: \n");
    scanf("%s", &cidade2);
    // Cidade que a carta representa
    
    unsigned long int populacao2;
    printf("Digite o número aproximado de habitantes da nova cidade: \n");
    scanf("%lu", &populacao2);
    // Número de habitantes que a cidade possui
    
    float area2;
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);
    // Área da cidade em km²
    
    float pib2;
    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);
    // Produto Interno Bruto (PIB) da cidade
    
    int turistico2;
    printf("Digite a quantidade de pontos turísticos que a outra cidade possui: \n");
    scanf("%i", &turistico2);
    // Número de pontos turísticos que a cidade possui

    float DensidadePopulacional2 = populacao2 / area2;
    // Calcular a Densidade Populacional da cidade    

    float pibPerCapita2 = pib2 / populacao2;
    // Calcular o PIB per capita da cidade

    float DensidadePoder2 = area2 / populacao2;
    // Calcular o inverso da densidade para calcular o valor do Super Poder da carta

    float SuperPoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibPerCapita2 + DensidadePoder2;
    // Calcular o valor do Super Poder da carta

    //printf("A letra que representa o primeiro estado é: %c. \n", estado);
    //printf("O código da primeira carta é: %s. \n", codigo);
    //printf("O nome da cidade é: %s. \n", cidade);
    //printf("A população da cidade é de aproximadamente %lu habitantes. \n", populacao);
    //printf("A área da cidade é de: %.1fkm². \n", area);
    //printf("O PIB da cidade é de: R$%.1f. \n", pib);
    //printf("A cidade tem um total de %i pontos turísticos. \n", turistico);
    //printf("A densidade populacional dessa cidade é de %.2f habitantes por km². \n", DensidadePopulacional);
    //printf("O PIB per capita dessa cidade é de R$%.2f. \n", pibPerCapita);
    //Exibir todas as informações referentes a primeira carta

    //printf("A letra que representa o segundo estado é: %c. \n", estado2);
    //printf("O código da segunda carta é: %s. \n", codigo2);
    //printf("O nome da segunda cidade é: %s. \n", cidade2);
    //printf("A população da outra cidade é de aproximadamente %lu habitantes. \n", populacao2);
    //printf("A área da cidade é de: %.1fkm². \n", area2);
    //printf("O PIB da cidade é de: R$%.1f. \n", pib2);
    //printf("Essa cidade tem um total de %i pontos turísticos. \n", turistico2);
    //printf("A densidade populacional dessa cidade é de %.2f habitantes por km². \n", DensidadePopulacional2);
    //printf("O PIB per capita dessa cidade é de R$%.2f. \n\n", pibPerCapita2);
    //Exibir todas as informações referentes a segunda carta


    printf("***Comparação Cartas Super Trunfo***\n");

    int opcao;

    printf("Escolha um dos atributos a seguir para fazer a comparação:\n");
    printf("**ATENÇÃO**\n");
    printf("No atributo 'densidade demográfica' a cidade com o MENOR valor vence.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcao);


    switch (opcao) {

        case 1:
        if (populacao > populacao2) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: população.\n");
            printf("A primeira cidade possui o valor população de %lu.\n", populacao);
            printf("A segunda cidade possui o valor população de %lu.\n", populacao2);
            printf("A primeira carta venceu!\n");
            } else  if (populacao2 > populacao) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: população.\n");
            printf("A primeira cidade possui o valor população de %lu.\n", populacao);
            printf("A segunda cidade possui o valor população de %lu.\n", populacao2);
            printf("A segunda carta venceu!\n");
            } else {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: população.\n");
            printf("A primeira cidade possui o valor população de %lu.\n", populacao);
            printf("A segunda cidade possui o valor população de %lu.\n", populacao2);
            printf("Empate! Ambas as cidades possuem a mesma população.\n");
            } 
            break;

        case 2:
        if (area > area2) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: área.\n");
            printf("A primeira cidade possui o valor área de %.1fkm².\n", area);
            printf("A segunda cidade possui o valor área de %.1fkm².\n", area2);
            printf("A primeira carta venceu!\n");
            } else  if (area2 > area) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: área.\n");
            printf("A primeira cidade possui o valor área de %.1f.\n", area);
            printf("A segunda cidade possui o valor área de %.1f.\n", area2);
            printf("A segunda carta venceu!\n");
            } else {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: área.\n");
            printf("A primeira cidade possui o valor área de %.1f.\n", area);
            printf("A segunda cidade possui o valor área de %.1f.\n", area2);
            printf("Empate! Ambas as cidades possuem a mesma área.\n");
            } 
            break;

        case 3:
        if (pib > pib2) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: PIB.\n");
            printf("A primeira cidade possui o valor pib de %.1f.\n", pib);
            printf("A segunda cidade possui o valor pib de %.1f.\n", pib2);
            printf("A primeira carta venceu!\n");
            } else  if (pib2 > pib) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: PIB.\n");
            printf("A primeira cidade possui o valor pib de %.1f.\n", pib);
            printf("A segunda cidade possui o valor pib de %.1f.\n", pib2);
            printf("A segunda carta venceu!\n");
            } else {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: PIB.\n");
            printf("A primeira cidade possui o valor pib de %.1f.\n", pib);
            printf("A segunda cidade possui o valor pib de %.1f.\n", pib2);
            printf("Empate! Ambas as cidades possuem o mesmo PIB.\n");
            } 
            break;

        case 4:
        if (turistico > turistico2) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: pontos turísticos.\n");
            printf("A primeira cidade possui o valor pontos turísticos de %d.\n", turistico);
            printf("A segunda cidade possui o valor pontos turísticos de %d.\n", turistico2);
            printf("A primeira carta venceu!\n");
            } else  if (turistico2 > turistico) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: pontos turísticos.\n");
            printf("A primeira cidade possui o valor pontos turísticos de %d.\n", turistico);
            printf("A segunda cidade possui o valor pontos turísticos de %d.\n", turistico2);
            printf("A segunda carta venceu!\n");
            } else {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: pontos turísticos.\n");
            printf("A primeira cidade possui o valor pontos turísticos de %d.\n", turistico);
            printf("A segunda cidade possui o valor pontos turísticos de %d.\n", turistico2);
            printf("Empate! Ambas as cidades possuem a mesma quantidade de pontos turísticos.\n");
            } 
            break;

        case 5:
        if (DensidadePopulacional < DensidadePopulacional2) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: densidade demográfica.\n");
            printf("A primeira cidade possui o valor densidade demográfica de %.2f.\n", DensidadePopulacional);
            printf("A segunda cidade possui o valor densidade demográfica de %.2f.\n", DensidadePopulacional2);
            printf("A primeira carta venceu!\n");
            } else  if (DensidadePopulacional2 < DensidadePopulacional) {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: densidade demográfica.\n");
            printf("A primeira cidade possui o valor densidade demográfica de %.2f.\n", DensidadePopulacional);
            printf("A segunda cidade possui o valor densidade demográfica de %.2f.\n", DensidadePopulacional2);
            printf("A segunda carta venceu!\n");
            } else {
            printf("Cidades em disputa: %s e %s.\n", cidade, cidade2);
            printf("O atributo usado na comparação foi: densidade demográfica.\n");
            printf("A primeira cidade possui o valor densidade demográfica de %.2f.\n", DensidadePopulacional);
            printf("A segunda cidade possui o valor densidade demográfica de %.2f.\n", DensidadePopulacional2);
            printf("Empate! Ambas as cidades possuem a mesma quantidade de pontos turísticos.\n");
            } 
            break;

        default:
            printf("Opção inválida!\n");
        }

    return 0;
}

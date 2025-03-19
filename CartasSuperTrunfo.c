#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Variaveis que serao usadas
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char Nomecidade1[20], Nomecidade2[20];
    int Npopulacao1, Npopulacao2;
    float quilomentros1, quilomentros2;
    float PIB1, PIB2;
    int PontoTuristico1, PontoTuristico2;
    //Nova informaçoes solicitada no desafio N Aventureiro
    float densidadePopulacional1, densidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;

    //Informaçoes da 1° cidade
    printf("Informaçao da 1° carta\n");
    printf("Escolha de A a H: \n");
    scanf(" %c", &estado1); //coloqui um espaço a mais para evitar problemas
    printf("Letra e numero de 01 a 04: ex A01\n");
    scanf(" %s", codigoCarta1);//coloqui um espaço a mais para evitar problemas
    printf("Nome da cidade 1: \n");
    scanf(" %s", Nomecidade1);//coloqui um espaço a mais para evitar problemas
    printf("População: \n");
    scanf("%d", &Npopulacao1);
    printf("Tamanho da cidade em KM2: \n");
    scanf("%f", &quilomentros1);
    printf("PIB: \n");
    scanf("%f", &PIB1);
    printf("Numero de pontos turistico: \n");
    scanf("%d", &PontoTuristico1);

    //Copei e colei tudo munado so as varias com base na 2 cidade
    printf("Informaçao da 2° carta\n");
    printf("Escolha de A a H: \n");
    scanf(" %c", &estado2);//coloqui um espaço a mais para evitar problemas
    printf("Letra e numero de 01 a 04: ex A02\n");
    scanf(" %s", codigoCarta2);//coloqui um espaço a mais para evitar problemas
    printf("Nome da cidade 2: \n");
    scanf(" %s", Nomecidade2);//coloqui um espaço a mais para evitar problemas
    printf("População: \n");
    scanf("%d", &Npopulacao2);
    printf("Tamanho da cidade em KM2: \n");
    scanf("%f", &quilomentros2);
    printf("PIB: \n");
    scanf("%f", &PIB2);
    printf("Numero de pontos turistico: \n");
    scanf("%d", &PontoTuristico2);

    //novas dados
    densidadePopulacional1 = Npopulacao1 / quilomentros1;
    densidadePopulacional2 = Npopulacao1 / quilomentros1;
    PIBperCapita1 = PIB1 / Npopulacao1;
    PIBperCapita2 = PIB2 / Npopulacao2;


    printf("Carta 1\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%d\nÁrea:%.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos:%d\nDensidade Populacional: %.2fhab/km²\nPIB per Capita: %.2fR$\n", estado1, codigoCarta1, Nomecidade1, Npopulacao1, quilomentros1, PIB1, PontoTuristico1, densidadePopulacional1, PIBperCapita1);

    printf("Carta 2\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%d\nÁrea:%.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos:%d\nDensidade Populacional: %.2fhab/km²\nPIB per Capita: %.2fR$\n", estado2, codigoCarta2, Nomecidade2, Npopulacao2, quilomentros2, PIB2, PontoTuristico2, densidadePopulacional2, PIBperCapita2);



    return 0;
}

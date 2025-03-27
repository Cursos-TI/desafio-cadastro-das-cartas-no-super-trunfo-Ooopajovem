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

    /*
	Desafio: nível mestre
	Batalha de Cartas no Super Trunfo

	Prepare-se para o desafio final! Agora que você já sabe cadastrar cartas e calcular atributos importantes, é hora de colocar suas cartas para lutar! Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". Prepare-se para usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!
	
	*/
	float inverso_densidade1 = 1 / densidadePopulacional1;
	float inverso_densidade2 = 1 / densidadePopulacional2;
	
	//novos Dados 2
	float superPoder1, superPoder2;
	superPoder1 = (float)Npopulacao1 + quilomentros1 + PIB1 + (float)PontoTuristico1 + PIBperCapita1 + inverso_densidade1 + densidadePopulacional1;
	superPoder2 = (float)Npopulacao2 + quilomentros2 + PIB2 + (float)PontoTuristico2 + PIBperCapita2 + inverso_densidade2 + densidadePopulacional2;


	//resultados das cidades 1 e dois
	int resulsuperPoder1, resulsuperPoder2;
	int rNpopulacao1, rNpopulacao2;
	int rquilomentros1, rquilomentros2;
	int rPIB1, rPIB2;
	int rPontoTuristico1, rPontoTuristico2;
	int rPIBperCapita1, rPIBperCapita2;
	int rinverso_densidade1, rinverso_densidade2;
	int rdensidadePopulacional1, rdensidadePopulacional2;
	//comparando
	resulsuperPoder1 = superPoder1 > superPoder2;
	resulsuperPoder2 = superPoder2 > superPoder1;
	//
	rNpopulacao1 = Npopulacao1 > Npopulacao2;
	rNpopulacao2 = Npopulacao2 > Npopulacao1;
	//
	rquilomentros1 = quilomentros1 > quilomentros2;
	rquilomentros2 = quilomentros2 > quilomentros1;
	//
	rPIB1 = PIB1 > PIB2;
	rPIB2 = PIB2 > PIB1;
	//
	rPontoTuristico1 = PontoTuristico1 > PontoTuristico2;
	rPontoTuristico2 = PontoTuristico2 > PontoTuristico1;
	//
	rPIBperCapita1 = PIBperCapita1 > PIBperCapita2;
	rPIBperCapita2 = PIBperCapita2 > PIBperCapita1;
	//
	rinverso_densidade1 = inverso_densidade1 < inverso_densidade2;
	rinverso_densidade2 = inverso_densidade2 < inverso_densidade1;
	//
	rdensidadePopulacional1 = densidadePopulacional1 > densidadePopulacional2;
	rdensidadePopulacional2 = densidadePopulacional2 > densidadePopulacional1;

    printf("Carta 1\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%d\nÁrea:%.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos:%d\nDensidade Populacional: %.2fhab/km²\nPIB per Capita: %.2fR$\n", estado1, codigoCarta1, Nomecidade1, Npopulacao1, quilomentros1, PIB1, PontoTuristico1, densidadePopulacional1, PIBperCapita1);

    printf("Carta 2\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%d\nÁrea:%.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos:%d\nDensidade Populacional: %.2fhab/km²\nPIB per Capita: %.2fR$\n", estado2, codigoCarta2, Nomecidade2, Npopulacao2, quilomentros2, PIB2, PontoTuristico2, densidadePopulacional2, PIBperCapita2);

    printf("Comparando as cidades 1 venceu 0 perdeu\n");
    printf("Cidade 1\n");
    printf("População: %d\nÁrea: %d\nPIB: %d\nPontos Turísticos: %d\nDensidade Populacional: %d\nPIB per Capita: %d\nSuper Poder: %d\n", rNpopulacao1, rquilomentros1, rPIB1, rdensidadePopulacional1, rPIBperCapita1, resulsuperPoder1);
    printf("Cidade 2\n");
    printf("População: %d\nÁrea: %d\nPIB: %d\nPontos Turísticos: %d\nDensidade Populacional: %d\nPIB per Capita: %d\nSuper Poder: %d\n", rNpopulacao2, rquilomentros2, rPIB2, rdensidadePopulacional2, rPIBperCapita2, resulsuperPoder2);


    return 0;
}

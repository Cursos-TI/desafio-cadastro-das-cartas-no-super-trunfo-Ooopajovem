#include <stdio.h>

int main() {
    // Variáveis
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char Nomecidade1[20], Nomecidade2[20];
    int Npopulacao1, Npopulacao2;
    float quilometros1, quilometros2;
    float PIB1, PIB2;
    int PontoTuristico1, PontoTuristico2;
    float densidadePopulacional1, densidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;

    // Informações da 1° cidade
    printf("Informação da 1° carta\n");
    printf("Escolha de A a H: \n");
    scanf(" %s", &estado1);
    printf("Letra e numero de 01 a 04: ex A01\n");
    scanf("%s", codigoCarta1); // Limita a 2 caracteres
    printf("Nome da cidade 1: \n");
    scanf(" %s", Nomecidade1); // Limita a 19 caracteres + \0
    printf("População: \n");
    scanf("%d", &Npopulacao1);
    printf("Tamanho da cidade em KM2: \n");
    scanf("%f", &quilometros1);
    printf("PIB: \n");
    scanf("%f", &PIB1);
    printf("Numero de pontos turistico: \n");
    scanf("%d", &PontoTuristico1);

    // Informações da 2° cidade
    printf("Informação da 2° carta\n");
    printf("Escolha de A a H: \n");
    scanf(" %s", &estado2);
    printf("Letra e numero de 01 a 04: ex A02\n");
    scanf("%s", codigoCarta2);
    printf("Nome da cidade 2: \n");
    scanf(" %s", Nomecidade2);
    printf("População: \n");
    scanf("%d", &Npopulacao2);
    printf("Tamanho da cidade em KM2: \n");
    scanf("%f", &quilometros2);
    printf("PIB: \n");
    scanf("%f", &PIB2);
    printf("Numero de pontos turistico: \n");
    scanf("%d", &PontoTuristico2);

    // Cálculos
    densidadePopulacional1 = (float)Npopulacao1 / quilometros1;
    densidadePopulacional2 = (float)Npopulacao2 / quilometros2;
    PIBperCapita1 = PIB1 / Npopulacao1;
    PIBperCapita2 = PIB2 / Npopulacao2;

    float inverso_densidade1 = 1.0f / densidadePopulacional1;
    float inverso_densidade2 = 1.0f / densidadePopulacional2;
    
    // Cálculo do Super Poder (removido densidadePopulacional da soma)
    float superPoder1 = (float)Npopulacao1 + quilometros1 + PIB1 + 
                       (float)PontoTuristico1 + PIBperCapita1 + inverso_densidade1;
    
    float superPoder2 = (float)Npopulacao2 + quilometros2 + PIB2 + 
                       (float)PontoTuristico2 + PIBperCapita2 + inverso_densidade2;

    // Resultados das comparações
    int rNpopulacao = Npopulacao1 > Npopulacao2;
    int rQuilometros = quilometros1 > quilometros2;
    int rPIB = PIB1 > PIB2;
    int rPontosTuristicos = PontoTuristico1 > PontoTuristico2;
    int rPIBperCapita = PIBperCapita1 > PIBperCapita2;
    int rInversoDensidade = inverso_densidade1 > inverso_densidade2;
    int rSuperPoder = superPoder1 > superPoder2;

    //comentei esse pedaço pq vou usar o mesmo no switch
    // Exibição dos dados
    /*printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", Nomecidade1);
    printf("População: %d\n", Npopulacao1);
    printf("Área: %.2f km²\n", quilometros1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.4f\n", PIBperCapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", Nomecidade2);
    printf("População: %d\n", Npopulacao2);
    printf("Área: %.2f km²\n", quilometros2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.4f\n", PIBperCapita2);

    // Resultado das comparações
    printf("\nComparação entre as cidades (1 venceu, 0 perdeu)\n");
    printf("População: %d\n", rNpopulacao);
    printf("Área: %d\n", rQuilometros);
    printf("PIB: %d\n", rPIB);
    printf("Pontos Turísticos: %d\n", rPontosTuristicos);
    printf("PIB per Capita: %d\n", rPIBperCapita);
    printf("Inverso da Densidade: %d\n", rInversoDensidade);
    printf("Super Poder: %d (%.2f vs %.2f)\n", rSuperPoder, superPoder1, superPoder2);
*/
    /*
    tema 2
    nivel novato
    */

    //comentei esse pedaço pq vou usar o mesmo no switch
   /*printf("Cidade 1 VS Cidade 2: População\n");
   if (Npopulacao1 > Npopulacao2){
       printf("Cidade 1: %d\n", Npopulacao1);
       printf("Cidade 2: %d\n", Npopulacao2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       printf("Cidade 1: %d\n", Npopulacao1);
       printf("Cidade 2: %d\n", Npopulacao2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
   printf("Cidade 1 VS Cidade 2: Quilometros\n");
   if (quilometros1 > quilometros2){
       printf("Cidade 1: %f\n", quilometros1);
       printf("Cidade 2: %f\n", quilometros2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       printf("Cidade 1: %f\n", quilometros1);
       printf("Cidade 2: %f\n", quilometros2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
   printf("Cidade 1 VS Cidade 2: PIB\n");
   if (PIB1 > PIB2){
       printf("Cidade 1: %f\n", PIB1);
       printf("Cidade 2: %f\n", PIB2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       printf("Cidade 1: %f\n", PIB1);
       printf("Cidade 2: %f\n", PIB2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
   printf("Cidade 1 VS Cidade 2: N° Pontos Turistico\n");
   if (PontoTuristico1 > PontoTuristico2){
       printf("Cidade 1: %d\n", PontoTuristico1);
       printf("Cidade 2: %d\n", PontoTuristico2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       printf("Cidade 1: %d\n", PontoTuristico1);
       printf("Cidade 2: %d\n", PontoTuristico2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
   printf("Cidade 1 VS Cidade 2: Densidade Populacional\n");
   if (densidadePopulacional1 > densidadePopulacional2){
       printf("Cidade 1: %f\n", densidadePopulacional1);
       printf("Cidade 2: %f\n", densidadePopulacional2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       printf("Cidade 1: %f\n", densidadePopulacional1);
       printf("Cidade 2: %f\n", densidadePopulacional2);
       printf("Resultado: Cidade 2 ganhou\n");
   }*/ //so os atributos que foram pedidos no desafio
   printf("Cidade 1 VS Cidade 2: PIB perCapita\n");
   if (PIBperCapita1 > densidadePopulacional2){
       printf("Cidade 1: %f\n", PIBperCapita1);
       printf("Cidade 2: %f\n", PIBperCapita2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       printf("Cidade 1: %f\n", PIBperCapita1);
       printf("Cidade 2: %f\n", PIBperCapita2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
   /*
   tema 2 Desafio: nível aventureiro
   */
   int op;
    printf("-=-=-=-=-OPA-=-=-=-=-\n");
    printf("1 Nome do país\n2 População\n3 Área\n4 PIB\n5 Número de pontos turísticos\n6 Densidade demográfica\n");
    printf("Qual atributos vc quer ver: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
       printf("Nome das cidades\n 1° % s\n2° % s\n",Nomecidade1, Nomecidade2);
       printf("Nao há\n");
       printf("Nao há\n");
        break;
    case 2:
    printf("Nome das cidades\n 1° % s\n2° % s\n",Nomecidade1, Nomecidade2);
    printf("-=-=População=-=-\n");
    printf("Valor da cidade1: %d\nValor da cidade2: %d\n",Npopulacao1, Npopulacao2);
    
    if (Npopulacao1 == Npopulacao2)
    {
        printf("Empate\n");
    }   //printf("Cidade 1 VS Cidade 2: População\n");
     else if (Npopulacao1 > Npopulacao2){
        //printf("Cidade 1: %d\n", Npopulacao1);
        //printf("Cidade 2: %d\n", Npopulacao2);
        printf("Resultado: Cidade 1 ganhou\n");
    }
    else{
        //printf("Cidade 1: %d\n", Npopulacao1);
        //printf("Cidade 2: %d\n", Npopulacao2);
        printf("Resultado: Cidade 2 ganhou\n");
    }
        break;

    case 3:
    printf("Nome das cidades\n 1° % s\n2° % s\n",Nomecidade1, Nomecidade2);
    printf("-=-=Área=-=-\n");
    printf("Valor da cidade1: %.2f\nValor da cidade2: %.2f\n",quilometros1, quilometros2);
    if (quilometros1 == quilometros2)
    {
        printf("Empate\n");
    }
    //printf("Cidade 1 VS Cidade 2: Quilometros\n");
   else if (quilometros1 > quilometros2){
       //printf("Cidade 1: %f\n", quilometros1);
       //printf("Cidade 2: %f\n", quilometros2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       //printf("Cidade 1: %f\n", quilometros1);
       //printf("Cidade 2: %f\n", quilometros2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
        break;
    case 4:
    printf("Nome das cidades\n 1° % s\n2° % s\n",Nomecidade1, Nomecidade2);
    printf("-=-=PIB=-=-\n");
    printf("Valor da cidade1: %f\nValor da cidade2: %f\n",PIB1, PIB2);
    if (PIB1 == PIB2)
    {
        printf("Empate\n");
    }
    //printf("Cidade 1 VS Cidade 2: PIB\n");
   else if (PIB1 > PIB2){
       //printf("Cidade 1: %f\n", PIB1);
       //printf("Cidade 2: %f\n", PIB2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       //printf("Cidade 1: %f\n", PIB1);
       //printf("Cidade 2: %f\n", PIB2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
        break;
    case 5:
    printf("Nome das cidades\n 1° % s\n2° % s\n",Nomecidade1, Nomecidade2);
    printf("-=-=Número de pontos turísticos=-=-\n");
    printf("Valor da cidade1: %d\nValor da cidade2: %d\n",PontoTuristico1,PontoTuristico2 );
    if (PontoTuristico1 == PontoTuristico2)
    {
        printf("Empate\n");
    }
    //printf("Cidade 1 VS Cidade 2: N° Pontos Turistico\n");
   else if (PontoTuristico1 > PontoTuristico2){
       //printf("Cidade 1: %d\n", PontoTuristico1);
       //printf("Cidade 2: %d\n", PontoTuristico2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
       //printf("Cidade 1: %d\n", PontoTuristico1);
       //printf("Cidade 2: %d\n", PontoTuristico2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
        break;
    case 6:
    printf("Nome das cidades\n 1° % s\n2° % s\n",Nomecidade1, Nomecidade2);
    printf("-=-=Densidade demográfica=-=-\n");
    printf("Valor da cidade1: %.2f\nValor da cidade2: %.2f",densidadePopulacional1, densidadePopulacional2);
    if (densidadePopulacional1 == densidadePopulacional2)
    {
        printf("Empate");
    }
    //printf("Cidade 1 VS Cidade 2: Densidade Populacional\n");
   else if (densidadePopulacional1 > densidadePopulacional2){
       //printf("Cidade 1: %f\n", densidadePopulacional1);
       //printf("Cidade 2: %f\n", densidadePopulacional2);
       printf("Resultado: Cidade 1 ganhou\n");
   }
   else{
    // printf("Cidade 1: %f\n", densidadePopulacional1);
    //printf("Cidade 2: %f\n", densidadePopulacional2);
       printf("Resultado: Cidade 2 ganhou\n");
   }
        break;
    default:
        break;
    }
    return 0;
}

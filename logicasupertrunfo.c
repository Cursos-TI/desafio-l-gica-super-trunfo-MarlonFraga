#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

     //Cadastro de variaveis      
        char estado1 [20], estado2 [20];
        char codigocarta1 [5], codigocarta2 [5];
        char cidade1 [50], cidade2 [50];                  
        unsigned long int  populacao1, populacao2;
        float areaKM1, areaKM2;
        float pib1, pib2;        
        int pontosturisticos1, pontosturisticos2;

        //Abaixo as 2 novas variaveis
        float densidadepopulacional_1;
        float densidadepopulacional_2;
        float pibpercapita_1; 
        float pibpercapita_2;  
        
        // Cadastro variavel SUPER PODER
        float superpoder1;
        float superpoder2;

      
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

       // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //Cadastro CARTA 1 (ENTRADA DE DADOS)

         printf("INFORME CARTA 1\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado1);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta1);

         printf("Digite nome da cidade: ");
         scanf("%s", &cidade1);

         printf("Digite a populacao: ");
         scanf("%lu", &populacao1);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM1);

         printf("Digite o PIB: ");
         scanf("%f", &pib1);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos1);  

          //Calculo das 2 novas informações
         densidadepopulacional_1 = ((float)populacao1 / areaKM1);
         pibpercapita_1 = (pib1 / populacao1);
         
         //Calculo do SUPER PODER CARTA 1
         superpoder1 = (populacao1 + areaKM1 + pib1 + pontosturisticos1 + (1.0f / densidadepopulacional_1) + pibpercapita_1);                        

                
         printf("\n"); //impressão apenas para pular linha e ficar organizado o cadastro da visualizacao.
             
         //Impressão CARTA 1 (SAIDA DE DADOS)
         printf("CARTA 1\n");       
         printf("Nome Estado: %s\n", estado1);
         printf("Codigo Carta: %s\n", codigocarta1);
         printf("Cidade: %s\n", cidade1);
         printf("Populacao: %lu habitantes\n", populacao1);
         printf("Area km²: %.2fkm²\n", areaKM1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turisticos: %d\n", pontosturisticos1);
         printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional_1);
         printf("PIB per Capita é: %.2f reais\n", pibpercapita_1);
         printf("SUPER PODER: %.2f\n", superpoder1);
         
         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.         

         //Cadastro CARTA 2 (ENTRADA DE DADOS)

         printf("INFORME CARTA 2\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado2);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta2);

         printf("Digite nome da cidade: ");
         scanf("%s", &cidade2);

         printf("Digite a populacao: ");
         scanf("%lu", &populacao2);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM2);

         printf("Digite o PIB: ");
         scanf("%f", &pib2);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos2);

          //Calculo das 2 novas informações
         densidadepopulacional_2 = ((float)populacao2 / areaKM2);
         pibpercapita_2 = (pib2 / populacao2);  

         //Cadlculo SUPER PODER CARTA 2
         superpoder2 = (populacao2 + areaKM2 + pib2 + pontosturisticos2 + (1.0f / densidadepopulacional_2) + pibpercapita_2);

         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.

         //Impressão CARTA 2 (SAIDA DE DADOS)
         printf("CARTA 2\n");
         printf("Nome Estado: %s\n", estado2);
         printf("Codigo Carta: %s\n", codigocarta2);
         printf("Cidade: %s\n", cidade2);
         printf("Populacao: %lu habitantes\n", populacao2);
         printf("Area km²: %.2fkm²\n", areaKM2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turisticos: %d\n", pontosturisticos2);
         printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional_2);
         printf("PIB per Capita é: %.2f reais\n", pibpercapita_2);
         printf("SUPER PODER: %.2f\n", superpoder2);
         
         printf("\n");
         printf("*************************************************************************\n");
         printf("\n");

         




    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");    // }      
      
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
        printf("==== Comparação =====\n");
        printf("CARTA 1 versus CARTA 2\n");              
        printf("\n");

         // População
         printf("Comparação de cartas (Atributo: População)\n\n");
         printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
         printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

         // Faz a comparação
         if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         }

         //  Área
         printf("Comparação de cartas (Atributo: Área KM²)\n\n");
         printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, areaKM1);
         printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, areaKM2);

         // Faz a comparação
         if (areaKM1 > areaKM2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (areaKM2 > areaKM1) {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         }       

         //  PIB
         printf("Comparação de cartas (Atributo: PIB)\n\n");
         printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, pib1);
         printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, pib2);
 
         // Faz a comparação
         if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         }
        

          //  Pontos Turisticos
         printf("Comparação de cartas (Atributo: Pontos Turísticos)\n\n");
         printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosturisticos1);
         printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosturisticos2);

         // Faz a comparação
         if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (pontosturisticos2 > pontosturisticos1) {                
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         } 

          //  Densidade populacionao
         printf("Comparação de cartas (Atributo: Densidade Populacional)\n\n");
         printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, densidadepopulacional_1);
         printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, densidadepopulacional_2);

         // Faz a comparação
         if (densidadepopulacional_1 > densidadepopulacional_2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (densidadepopulacional_2 > densidadepopulacional_1) {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         } 

          //  PIB per Capita
         printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");
         printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, pibpercapita_1);
         printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, pibpercapita_2);

         // Faz a comparação
         if (pibpercapita_1 > pibpercapita_2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (pibpercapita_2 > pibpercapita_1) {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         } 

          //  Super Poder
         printf("Comparação de cartas (Atributo: Super Poder)\n\n");
         printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, superpoder1);
         printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, superpoder2);

         // Faz a comparação
         if (superpoder1 > superpoder2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (superpoder2 > superpoder1) {
                printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);        
         } 
        

           
         
         



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;

}

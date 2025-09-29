#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

        //Novas variaveis para escolha e comparativos dos itens
        int escolhajogador1, escolhajogador2, escolhacomputador1, escolhacomputador2;
        int resultado1, resultado2;
        srand(time(0));

      
    
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

         
       // Adicionando o Swit para interação do jogador e escolha de dois itens comparação.

       //Impressão das opções para escolha do jogador e entrada de dados:
       printf("Escolha primeiro atribudo de comparação\n\n");
       printf("1. População\n");
       printf("2. Área KM²\n");
       printf("3. PIB\n");
       printf("4. Pontos Turistícos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB per Capita\n");
       printf("7. SUPER PODER\n");
       printf("Digite a opção escolhida: ");
       scanf("%d", &escolhajogador1);

       printf("\n");

       switch (escolhajogador1)
       {
       case 1:
              printf("Comparando População\n");
              resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1 : 0;
              printf("Carta 1:  %.2lu | Carta 2: %.2lu\n", populacao1, populacao2);
              break;

       case 2:
              printf("Comparando Área KM²\n");
              resultado1 = (areaKM1 > areaKM2) ? 1 : (areaKM1 < areaKM2) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", areaKM1, areaKM2);
              break;

       case 3:
              printf("Comparando PIB\n");
              resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", pib1, pib2);
              break;

       case 4:
              printf("Comparando Pontos Turísticos\n");
              resultado1 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2) ? -1 : 0;
               printf("Carta 1:  %d | Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
              break;

       case 5:
              printf("Comparando Densidade Populacional\n");
              resultado1 = (densidadepopulacional_1 < densidadepopulacional_2) ? 1 : (densidadepopulacional_1 > densidadepopulacional_2) ? -1 : 0;
               printf("Carta 1:  %.2f | Carta 2: %.2f\n", densidadepopulacional_1, densidadepopulacional_2);
              break;

       case 6:
              printf("Comparando PIB per Capita\n");
              resultado1 = (pibpercapita_1 > pibpercapita_2) ? 1 : (pibpercapita_1 < pibpercapita_2) ? -1 : 0;
               printf("Carta 1:  %.2f | Carta 2: %.2f\n", pibpercapita_1, pibpercapita_2);
              break;

       case 7:
              printf("Comparando SUPER PODER\n");
              resultado1 = (superpoder1 > superpoder2) ? 1 : (superpoder1 < superpoder2) ? -1 : 0;
               printf("Carta 1:  %.2f | Carta 2: %.2f\n", superpoder1, superpoder2);
              break;
       
       default:
              printf("### Opção de jogo inválida! ###\n");
              break;
       }

       printf("\n");
       
       printf("Escolha segundo atribudo de comparação:\n\n");
       printf("1. População\n");
       printf("2. Área KM²\n");
       printf("3. PIB\n");
       printf("4. Pontos Turistícos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB per Capita\n");
       printf("7. SUPER PODER\n");
       printf("Digite a opção escolhida: ");
       scanf("%d", &escolhajogador2);

     
       printf("\n"); //Somente para pular linha


       if (escolhajogador1 == escolhajogador2) {
              printf("Você escolheu o mesmo atributo, escolha outro.\n");
       } else {
              switch (escolhajogador2) {
       
       case 1:
              printf("Comparando População\n");
              resultado2 = (populacao2 > populacao1) ? 1 : (populacao2 < populacao1) ? -1 : 0;
              printf("Carta 1:  %.2lu | Carta 2: %.2lu\n", populacao1, populacao2);
              break;

       case 2:
              printf("Comparando Área KM²\n");
              resultado2 = (areaKM2 > areaKM1) ? 1 : (areaKM2 < areaKM1) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", areaKM1, areaKM2);
              break;

       case 3:
              printf("Comparando PIB\n");
              resultado2 = (pib2 > pib1) ? 1 : (pib2 < pib1) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", pib1, pib2);
              break;

       case 4:
              printf("Comparando Pontos Turísticos\n");
              resultado2 = (pontosturisticos2 > pontosturisticos1) ? 1 : (pontosturisticos2 < pontosturisticos1) ? -1 : 0;
              printf("Carta 1:  %d | Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
              break;

       case 5:
              printf("Comparando Densidade Populacional\n");
              resultado2 = (densidadepopulacional_2 < densidadepopulacional_1) ? 1 : (densidadepopulacional_2 > densidadepopulacional_1) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", densidadepopulacional_1, densidadepopulacional_2);
              break;

       case 6:
              printf("Comparando PIB per Capita\n");
              resultado2 = (pibpercapita_2 > pibpercapita_1) ? 1 : (pibpercapita_2 < pibpercapita_1) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", pibpercapita_1, pibpercapita_2);
              break;

       case 7:
              printf("Comparando SUPER PODER\n"); 
              resultado2 = (superpoder2 > superpoder1) ? 1 : (superpoder2 < superpoder1) ? -1 : 0;
              printf("Carta 1:  %.2f | Carta 2: %.2f\n", superpoder1, superpoder2);
              break;
       
       default:
              printf("### Opção de jogo inválida! ###\n");
              break;
       }

        printf("\n\n"); //Pular duas linhas
             
            
        printf("### RESULTADO COMPARAÇÕES! ###\n");
        if (resultado1 == 0 && resultado2 == 0) {
              printf("Houve empate total!\n");
       } else if ((resultado1 == 0 && resultado2 == 1) || (resultado1 == 1 && resultado2 == 0)) {
              printf("Você venceu uma e a outra empatou!\n");
       } else if ((resultado1 == 0 && resultado2 == -1) || (resultado1 == -1 && resultado2 == 0)) {
              printf("Computador venceu uma e a outra empatou!\n");
       } else if (resultado1 == 1 && resultado2 == 1) {
              printf("Parabéns, você venceu as duas comparações!\n");
       } else if (resultado1 == -1 && resultado2 == -1) {
              printf("Computador venceu as duas comparações!\n");
       } else {
              printf("Resultado foi misto, cada um venceu uma rodada!\n");
       }
}














       

        
       //Estrutura das opções acima para escolha do usuário e processamento de lógica.

     //         switch (escolhajogador1)
     //  {
     //  case 2:
      //        printf("### Opção escolhida foi: Área KM²! ###\n");
     //         printf("Carta 1:  %.2f | Carta 2: %.2f\n", areaKM1, areaKM2);
     //                if (areaKM1 > areaKM2) printf("Parabéns, você venceu!\n");
     //                else if (areaKM1 < areaKM2) printf("Computador venceu!\n");
     //                else printf("Empate!\n");
     //         break;

     //  case 3:
     //         printf("### Opção escolhida foi: PIB! ###\n");
     //         printf("Carta 1:  %.2f | Carta 2: %.2f\n", pib1, pib2);
     //                if (pib1 > pib2) printf("Parabéns, você venceu!\n");
     //                else if (pib1 < pib2) printf("Computador venceu!\n");
     //                else printf("Empate!\n");
     //         break;

     //  case 4:
     //         printf("### Opção escolhida foi: Pontos Turísticos! ###\n");
     //         printf("Carta 1:  %d | Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
    //                 if (pontosturisticos1 > pontosturisticos2) printf("Parabéns, você venceu!\n");
      //               else if (pontosturisticos1 < pontosturisticos2) printf("Computador venceu!\n");
      //               else printf("Empate!\n");
      //        break;

      // case 5:
      //        printf("### Opção escolhida foi: Densidade populacional! ###\n");
      //        printf("Carta 1:  %.2f | Carta 2: %.2f\n", densidadepopulacional_1, densidadepopulacional_2);
      //               if (densidadepopulacional_1 < densidadepopulacional_2) printf("Parabéns, você venceu!\n");
     //                else if (densidadepopulacional_1 > densidadepopulacional_2) printf("Computador venceu!\n");
     //                else printf("Empate!\n");
     //         break;

     //  case 6:
     //         printf("### Opção escolhida foi: PIB per Capita! ###\n");
     //         printf("Carta 1:  %.2f | Carta 2: %.2f\n", pibpercapita_1, pibpercapita_2);
     //                if (pibpercapita_1 > pibpercapita_2) printf("Parabéns, você venceu!\n");
      //               else if (pibpercapita_1 < pibpercapita_2) printf("Computador venceu!\n");
     //                else printf("Empate!\n");
     //         break;

     //  case 7:
     //         printf("### Opção escolhida foi: SUPER PODER! ###\n");
     //         printf("Carta 1:  %.2f | Carta 2: %.2f\n", superpoder1, superpoder2);
     //                if (superpoder1 > superpoder2) printf("Parabéns, você venceu!\n");
     //                else if (superpoder1 < superpoder2) printf("Computador venceu!\n");
    //                 else printf("Empate!\n");
    //          break;
      
     //  default:
     //         printf("Opção Inválida. Escolha um número de 1 a 7.");
     //         break;
      // }

   
       
    
       

    return 0;

}

#include <stdio.h>

int main (){

int PontoTuristicos1, PontoTuristicos2;
char Codigo1[5], Codigo2[5];
char Estado1[10], Estado2[10];
char Cidade1[20], Cidade2[20];
int Populacao1, Populacao2;
float Area1, Area2;
float Pib1, Pib2;
float PPC1, PPC2;
float Densidade1, Densidade2;
float Superpoder1, Superpoder2;
int Resultado1, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;

//Carta 1

printf("*** CARTA 1 ***\n");

printf("Digite uma Letra do Estado da Carta1:   \n");
scanf("%s", &Estado1);
printf("A Letra do Estado da Carta 1 é:  %s\n", Estado1);
printf("\n");

printf("Digite o Codigo Carta1:   \n");
scanf("%s", &Codigo1);
printf("A o Codigo da Carta 1 é:  %s\n", Codigo1);
printf("\n");


printf("Digite a cidade da Carta1:   \n");
scanf("%s", &Cidade1);
printf("A cidade da Carta 1 é:  %s\n", Cidade1);
printf("\n");


printf("Digite a população da Carta1:   \n");
scanf("%d", &Populacao1);
printf("A população da Carta 1 é:  %d\n", Populacao1);
printf("\n");


printf("Digite a Area da Carta1:   \n");
scanf("%f", &Area1);
printf("A Area da Carta 1 é:  %f km²\n", Area1);
printf("\n");


printf("Digite o PIB da Carta1:   \n");
scanf("%f", &Pib1);
printf("O PIB da Carta 1 é:  %f bilhões de reais\n", Pib1);
printf("\n");


printf("Quantos Pontos Turisticos tem essa Carta:   \n");
scanf("%d", &PontoTuristicos1);
printf("A Carta 1 possui: %d Pontos Turisticos\n", PontoTuristicos1);
printf("\n");



//Carta2

printf("*** CARTA 2 ***\n");

printf("Digite uma Letra do Estado da Carta2:   \n");
scanf("%s", &Estado2);
printf("A Letra do Estado da Carta 2 é:  %s\n", Estado2);
printf("\n");


printf("Digite o Codigo Carta2:   \n");
scanf("%s", &Codigo2);
printf("A o Codigo da Carta 2 é:  %s\n", Codigo2);
printf("\n");


printf("Digite a cidade da Carta2:   \n");
scanf("%s", &Cidade2);
printf("A cidade da Carta 2 é:  %s\n", Cidade2);
printf("\n");


printf("Digite a população da Carta2:   \n");
scanf("%d", &Populacao2);
printf("A população da Carta 2 é:  %d\n", Populacao2);
printf("\n");


printf("Digite a Area da Carta2:   \n");
scanf("%f", &Area2);
printf("A Area da Carta 2 é:  %f km²\n", Area2);
printf("\n");


printf("Digite o PIB da Carta2:   \n");
scanf("%f", &Pib2);
printf("O PIB da Carta 2 é:  %f bilhões de reais\n", Pib2);
printf("\n");


printf("Quantos Pontos Turisticos tem essa Carta2:   \n");
scanf("%d", &PontoTuristicos2);
printf("A Carta 2 possui: %d Pontos Turisticos\n", PontoTuristicos2);
printf("\n");


//Calculo de Densidade Populacional da Carta1
    Densidade1 = Populacao1 / Area1;

    //Calulo de PPC da Carta1
    PPC1 = Pib1 / Populacao1;

    //Calculo de Densidade Populacional da Carta2
    Densidade2 = Populacao2 / Area2;

    //Calculo de PPC da Carta2
    PPC2 = Pib2 / Populacao2;

    // Calculando os Super Poderes
    Superpoder1 = Populacao1 + Area1 + Pib1 + PontoTuristicos1 + PPC1 + (1 / Densidade1);
    Superpoder2 = Populacao2 + Area2 + Pib2 + PontoTuristicos2 + PPC2 + (1 / Densidade2);

    Resultado1 = Populacao1 > Populacao2;
    Resultado2 = Area1 > Area2;
    Resultado3 = Pib1 >= Pib2;
    Resultado4 = PPC1 > PPC2;
    Resultado5 = Densidade1 < Densidade2;
    Resultado6 = PontoTuristicos1 > PontoTuristicos2;
    Resultado7 = Superpoder1 > Superpoder2;

printf(" ### Cartas Cadastradas ###\n");

    //Dados Carta 1

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %f km²\n", Area1);
    printf("PIB: R$%f bilhões\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontoTuristicos1);
    printf("A densidade populacional da cidade %s é: %.f habitantes por km \n", Cidade1, Densidade1);
    printf("O PIB per capita da cidade %s é: %f \n", Cidade1, PPC1);
    printf("Super Poder: %f\n", Superpoder1);

    printf("+++++++++++++++++++++++++++\n");

    //Dados Carta 2 

    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %f km²\n", Area2);
    printf("PIB: R$%f bilhões\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontoTuristicos2);
    printf("A densidade populacional da cidade %s é: %.2f habitantes por km \n", Cidade2, Densidade2);
    printf("O PIB per capita da cidade %s é: %.2f \n", Cidade2, PPC2);
    printf("Super Poder: %f\n", Superpoder2);


    //COMPARAÇÃO

    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontoTuristicos1 > PontoTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PPC1 > PPC2);
    printf("Super Poder: Carta 1 venceu (%d)\n", Superpoder1 > Superpoder2);

    printf("\n");

    printf("---# Qual a Carta mais Forte? #--- \n \n");

    printf("Ganhador de cada modalidade: dígito 1(CARTA 1) e o digito 0(CARTA 2) \n \n");
    printf("A CARTA 1 tem %d de habitantes e a CARTA 2 tem %d de habitantes\n ",Populacao1, Populacao2);
    printf("Quem tem mais Habitantes 1(CARTA 1) ou Habitantes 0(CARTA 2): %d \n \n " , Resultado1);
                  
    printf("A CARTA 1 tem %f de km² e a CARTA 2 tem %f de km²\n ", Area1,Area2);
    printf("Qual área(km²) é menor?(CARTA 1 OU CARTA 2): %d \n \n ", Resultado2);

    printf("A CARTA 1 tem R$ %f(Bilhões ou Milhões de Reais) de PIB e a CARTA 2 tem R$ %f(Bilhões ou Milhões de Reais) de PIB :\n", Pib1, Pib2);
    printf("Quem tem o PIB Maior(CARTA 1 OU CARTA 2): %d \n \n ", Resultado3);

    printf("A CARTA 1 tem R$ %f de Reais em PIB per Capita e a CARTA 2 tem R$ %f de Reais em PIB per Capita\n", PPC1, PPC2);
    printf("Quem tem o PIB per Capita Maior(CARTA 1 OU CARTA 2): %d  \n \n ", Resultado4);

    printf("A CARTA 1 tem %f de Densidade Populacional e a Carta 2 tem %f de Densidade Populacional: \n", Densidade1 , Densidade2);
    printf("Quem tem a Menor Densidade Capital(CARTA 1 OU CARTA 2): %d  \n \n ", Resultado5);

    printf("A CARTA 1 tem %d de pontos turísticos e a CARTA 2 tem %d de pontos turísticos\n ", PontoTuristicos1, PontoTuristicos2);
    printf("Quem tem mais pontos turísticos(CARTA 1 OU CARTA 2): %d \n ", Resultado6);

    printf("A CARTA 1 tem %f de Super Poder e a CARTA 2 tem %f de Super Poder : \n ", Superpoder1, Superpoder2);
    printf("Quem tem o Maior Super Poder(CARTA 1 OU CARTA 2): %d \n \n ", Resultado7);

return 0;
}
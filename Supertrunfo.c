#include <stdio.h>



int main (){

int PontoTuristicos1, PontoTuristicos2;
char Codigo1[5], Codigo2[5];
char Estado1[10], Estado2[10];
char Cidade1[20], Cidade2[20];
int Populacao1, Populacao2;
float Area1, Area2;
float Pib1, Pib2;

//Carta 1

printf("*** CARTA 1 ***\n");

printf("Digite uma Letra do Estado da Carta1:   \n");
scanf("%s", &Estado1);
printf("A Letra do Estado da Carta 1 é:  %s\n", Estado1);

printf("Digite o Codigo Carta1:   \n");
scanf("%s", &Codigo1);
printf("A o Codigo da Carta 1 é:  %s\n", Codigo1);

printf("Digite a cidade da Carta1:   \n");
scanf("%s", &Cidade1);
printf("A cidade da Carta 1 é:  %s\n", Cidade1);

printf("Digite a população da Carta1:   \n");
scanf("%d", &Populacao1);
printf("A população da Carta 1 é:  %d\n", Populacao1);

printf("Digite a Area da Carta1:   \n");
scanf("%f", &Area1);
printf("A Area da Carta 1 é:  %f km²\n", Area1);

printf("Digite o PIB da Carta1:   \n");
scanf("%f", &Pib1);
printf("O PIB da Carta 1 é:  %f bilhões de reais\n", Pib1);

printf("Quantos Pontos Turisticos tem essa Carta:   \n");
scanf("%d", &PontoTuristicos1);
printf("A Carta 1 possui: %d Pontos Turisticos\n", PontoTuristicos1);


//Carta2

printf("*** CARTA 2 ***\n");

printf("Digite uma Letra do Estado da Carta2:   \n");
scanf("%s", &Estado2);
printf("A Letra do Estado da Carta 2 é:  %s\n", Estado2);

printf("Digite o Codigo Carta2:   \n");
scanf("%s", &Codigo2);
printf("A o Codigo da Carta 2 é:  %s\n", Codigo2);

printf("Digite a cidade da Carta2:   \n");
scanf("%s", &Cidade2);
printf("A cidade da Carta 2 é:  %s\n", Cidade2);

printf("Digite a população da Carta2:   \n");
scanf("%d", &Populacao2);
printf("A população da Carta 2 é:  %d\n", Populacao2);

printf("Digite a Area da Carta2:   \n");
scanf("%f", &Area2);
printf("A Area da Carta 2 é:  %f km²\n", Area2);

printf("Digite o PIB da Carta2:   \n");
scanf("%f", &Pib2);
printf("O PIB da Carta 2 é:  %f bilhões de reais\n", Pib2);

printf("Quantos Pontos Turisticos tem essa Carta2:   \n");
scanf("%d", &PontoTuristicos2);
printf("A Carta 2 possui: %d Pontos Turisticos\n", PontoTuristicos2);

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

return 0;
}
#include <stdio.h>

int main(){
    char cidade1[50];
    char codigo1[50];
    char estado1[3];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    char cidade2[50];
    char codigo2[50];
    char estado2[3];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
    
    printf("===== SUPER TRUNFO =====\n");

    printf("Codigo da carta \n");
    scanf("%s", codigo1);
    
    printf("Nome da cidade \n");
    scanf("%s", cidade1);

    printf("Sigla do estado \n");
    scanf("%s", estado1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Turismo: \n");
    scanf("%d", &turismo1);


    printf("\n===== CARTA 1 =====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1); 
    printf("Turismo: %d\n", turismo1);
   
    printf("\n===== CARTA 2 =====\n");
    printf("Codigo da carta \n");
    scanf("%s", codigo2);
    
    printf("Nome da cidade \n");
    scanf("%s", cidade2);

    printf("Sigla do estado \n");
    scanf("%s", estado2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Turismo: \n");
    scanf("%d", &turismo2);

    printf("\n===== CARTA 2 =====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2); 
    printf("Turismo: %d\n", turismo2);

    return 0;

    

}
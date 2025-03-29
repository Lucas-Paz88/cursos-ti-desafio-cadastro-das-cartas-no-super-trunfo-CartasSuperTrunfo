#include <stdio.h>

int main() {
    char estado[10];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float PIB;
    int turisticos;

    printf("Estado: ");
    scanf(" %s", estado);
    

    printf("Código da Carta: ");
    scanf(" %s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %d",&populacao);

    printf("Área em km²: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &PIB);

    printf("Número de Pontos Tuísticos: ");
    scanf(" %d", &turisticos);

    printf("\n** Carta01 **\n");

    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f em km²\n", area);
    printf("PIB: R$%.2f em bilhões de reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", turisticos);

    

    
}

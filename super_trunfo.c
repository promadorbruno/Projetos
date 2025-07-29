#include <stdio.h>

int main (){

    char estado[20] = "Ceara";
    char codigo[50] = "A01";
    char cidade[50] = "Fortaleza";
    int populacao = 12325000;
    float area = 1521.11;
    float PIB = 699.28;
    int turistico = 50;

    printf("Digite o seu estado: \n");
    scanf("%s", &estado);

    printf("Digite o codígo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digiter a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%2f", &area);

    printf("Qual o PIB em bilhões R$: \n");
    scanf("%2f", &PIB);

    printf("Quantidade de pontos turísco: \n");
    scanf("%d", &turistico);

    printf("Qual Estado: %s", estado);
    printf("Codígo: %s", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %d", populacao);
    printf("Área: %f", area);
    printf("PIB: %f", PIB);
    printf("Turístico: %d", turistico);

    char estado1[20] = "Para";
    char codigo1[50] = "B02";
    char cidade1[50] = "Belem";
    int populacao1 = 6748000;
    float area1 = 1200.25;
    float PIB1 = 300.50;
    int turistico1 = 30;

    printf("Digite o seu estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codígo: \n");
    scanf("%s", &codigo1);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade1);

    printf("Digiter a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%2f", &area1);

    printf("Qual o PIB em bilhões R$: \n");
    scanf("%2f", &PIB1);

    printf("Quantidade de pontos turísco: \n");
    scanf("%d", &turistico1);

    printf("Qual Estado: %s", estado1);
    printf("Codígo: %s", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d", populacao1);
    printf("Área: %f", area1);
    printf("PIB: %f", PIB1);
    printf("Turístico: %d", turistico1);
 

    return 0;

}

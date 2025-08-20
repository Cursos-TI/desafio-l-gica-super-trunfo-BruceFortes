#include <stdio.h>
int main()
{
    // Variáveis Carta 1
    char estado1[20];
    char codigo1[4];
    char nomecidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numpontur1;
    float densidade1;
    float pibper1;

    // Variáveis Carta 2
    char estado2[20];
    char codigo2[4];
    char nomecidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numpontur2;
    float densidade2;
    float pibper2;

    // Leitura de dados Carta 1
    printf(" === CADASTRE A CARTA 1 === \n\n");
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta (ex: A01):");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numpontur1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibper1 = (float)pib1 / populacao1;

    // Leitura de dados Carta 2
    printf("\n === CADASTRE A CARTA 2 === \n\n");
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta (ex: B01):");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numpontur2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    printf("\n\n*** Exibindo os Dados Cadastrados ***\n\n");

    // Dados Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", numpontur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", pibper1);

    // Dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", numpontur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", pibper2);

    int pontos1 = 0, pontos2 = 0;

    // Comparação entre as Cartas
    printf("\n*** Comparação entre as Cartas: ***\n\n");

    printf("Atributo: POPULAÇÃO\n");

    printf("Carta 1 - ");
    printf("%s: ", estado1);
    printf("%lu\n", populacao1);

    printf("Carta 2 - ");
    printf("%s: ", estado2);
    printf("%lu\n", populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 - (%s) ", estado1);
        printf("Venceu!\n");
    }
    else
    {
        printf("Resultado: Carta 2 - (%s) ", estado2);
        printf("Venceu!\n");
    }

    printf("\nAtributo: AREA\n");

    printf("Carta 1 - ");
    printf("%s: ", estado1);
    printf("%.2f km²\n", area1);

    printf("Carta 2 - ");
    printf("%s: ", estado2);
    printf("%.2f km²\n", area2);

    if (area1 > area2)
    {
        printf("Resultado: Carta 1 - (%s) ", estado1);
        printf("Venceu!\n");
    }
    else
    {
        printf("Resultado: Carta 2 - (%s) ", estado2);
        printf("Venceu!\n");
    }

    printf("\nAtributo: PIB\n");

    printf("Carta 1 - ");
    printf("%s: ", estado1);
    printf("%.2f bilhões de reais\n", pib1);

    printf("Carta 2 - ");
    printf("%s: ", estado2);
    printf("%.2f bilhões de reais\n", pib2);

    if (pib1 > pib2)
    {
        printf("Resultado: Carta 1 - (%s) ", estado1);
        printf("Venceu!\n");
    }
    else
    {
        printf("Resultado: Carta 2 - (%s) ", estado2);
        printf("Venceu!\n");
    }

    printf("\nAtributo: NUMERO DE PONTOS TURISTICOS\n");

    printf("Carta 1 - ");
    printf("%s: ", estado1);
    printf("%d\n", numpontur1);

    printf("Carta 2 - ");
    printf("%s: ", estado2);
    printf("%d\n", numpontur2);

    if (numpontur1 > numpontur2)
    {
        printf("Resultado: Carta 1 - (%s) ", estado1);
        printf("Venceu!\n");
    }
    else
    {
        printf("Resultado: Carta 2 - (%s) ", estado2);
        printf("Venceu!\n");
    }
    printf("\nAtributo: DENSIDADE POPULACIONAL\n");

    printf("Carta 1 - ");
    printf("%s: ", estado1);
    printf("%.2f hab/km²\n", densidade1);

    printf("Carta 2 - ");
    printf("%s: ", estado2);
    printf("%.2f hab/km²\n", densidade2);

    if (densidade1 < densidade2)
    {
        printf("Resultado: Carta 1 - (%s) ", estado1);
        printf("Venceu!\n");
    }
    else
    {
        printf("Resultado: Carta 2 - (%s) ", estado2);
        printf("Venceu!\n");
    }

    printf("\nAtributo: PIB PER CAPITA\n");

    printf("Carta 1 - ");
    printf("%s: ", estado1);
    printf("%.2f reais\n", pibper1);

    printf("Carta 2 - ");
    printf("%s: ", estado2);
    printf("%.2f reais\n", pibper2);

    if (pibper1 > pibper2)
    {
        printf("Resultado: Carta 1 - (%s) ", estado1);
        printf("Venceu!\n");
    }
    else
    {
        printf("Resultado: Carta 2 - (%s) ", estado2);
        printf("Venceu!\n");
    }

    printf("\n_-_-_ RESULTADO _-_-_\n");

    if (populacao1 > populacao2)
        pontos1++;
    else
        pontos2++;
    if (area1 > area2)
        pontos1++;
    else
        pontos2++;
    if (pib1 > pib2)
        pontos1++;
    else
        pontos2++;
    if (numpontur1 > numpontur2)
        pontos1++;
    else
        pontos2++;
    if (densidade1 < densidade2)
        pontos1++;
    else
        pontos2++;
    if (pibper1 > pibper2)
        pontos1++;
    else
        pontos2++;

    printf("Carta 1: %d pontos\n", pontos1);
    printf("Carta 2: %d pontos\n", pontos2);

    if (pontos1 > pontos2)
    {
        printf("\nCARTA 1 VENCEU!\n");
    }
    else
    {
        printf("\nCARTA 2 VENCEU!\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    //fiz com o tema de cidades pois a atividade estava sobre este tema no painel//
    //aqui vou declarar as variáveis//
    //o codigo da carta sera a união da primeira letra do nome do estado e do nome da cidade, caso repita, o numero será aumentado//
    
    char Estado1[50],Estado2 [50];
    char Nome1[20], Nome2[20];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    char codigocarta1[20], codigocarta2 [20];
    float areacidade1, PIB1, areacidade2, PIB2;
    
    //primeira carta//

    printf("Digite o nome do estado: ");
    scanf("%s", &Estado1);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", &Nome1);

    printf("Digite o código da carta: ");
    scanf("%s", &codigocarta1);

    printf("Digite qual a população da sua cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da sua cidade em km²: ");
    scanf("%f", &areacidade1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turísticos sua cidade possui.");
    scanf("%f", &pontosturisticos1);

    //segunda carta//

    printf("Agora vamos digitar os dados da segunda carta:\n");

    printf("Digite o nome do estado: ");
    scanf("%s", &Estado2);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", &Nome2);

    printf("Digite o código da carta: ");
    scanf("%s", &codigocarta2);

    printf("Digite qual a população da sua cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da sua cidade em km²: ");
    scanf("%f", &areacidade2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos sua cidade possui.");
    scanf("%f", &pontosturisticos2);

    //carta 1 sendo mostrada//

    printf("CARTA 01:\n");

    printf("Estado:%s.\n", Estado1);
    printf("Cidade:%s.\n", Nome1);
    printf("Código:%s.\n", codigocarta1);
    printf("População:%d.\n", populacao1);
    printf("Área da Cidade:%.f\n",areacidade1);
    printf("PIB:%f.\n", PIB1);
    printf("Pontos turísticos:%d.\n", pontosturisticos1);

    printf("FINAL DA CARTA 01.\n");

    //carta 2 sendo mostrada//

    printf("CARTA 02:\n");

    printf("Estado:%s.\n", Estado2);
    printf("Cidade:%s.\n", Nome2);
    printf("Código:%s.\n", codigocarta2);
    printf("População:%d.\n", populacao2);
    printf("Área da Cidade:%.f\n",areacidade2);
    printf("PIB:%f.\n", PIB2);
    printf("Pontos turísticos:%d.\n", pontosturisticos2);

    printf("FINAL DA CARTA 02.\n");

    return 0;





}

#include <stdio.h> 

 //CARTA 1;


    //O SEGUINTE CODIGO FOI FEITO DA FORMA COMO EU ENTENDI O EXERCÍCIO.
    /* Não sabendo se o codigo teria já valores pre definidos e sendo alterados no prompt para o usuario. Parti do ponto 
    que os valores serão inseridos e lidos e depois apresentados.*/

int main() 

{
    /***************************************    CIDADE 1    ***************************************/
    char letraestado1[50]; 
    char cod_estado1[3];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontos_tur1;
    float densidade1;
    float PIB_per_capita1;
    float superpoder1;

    /****************************************    CIDADE 2     **************************************/

    char letraestado2[50]; 
    char cod_estado2[3];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontos_tur2;
    float densidade2;
    float PIB_per_capita2;
    float superpoder2;

    /**variavel switchcase**/
    int opcao;
    /**variavel swtichcase**/

    //CIDADE 1 e CIDADE 2
    printf("Insira o seu estado 1: \n");
    fgets(letraestado1, 50, stdin); 

    printf("Insira o seu estado 2: \n");
    fgets(letraestado2, 50, stdin); 

    printf("insira seu código sendo de 01 a 04 1: \n");
    scanf("%s", &cod_estado1); //será inserido um codigo de numero mas recebido no formato de string;

    printf("insira seu código sendo de 01 a 04 2: \n");
    scanf("%s", &cod_estado2);

    printf("Qual nome da sua cidade 1: \n");
    scanf("%s", &nome_cidade1); //Nome da cidade;

    printf("Qual nome da sua cidade 2: \n");
    scanf("%s", &nome_cidade2);
    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf ("qual população da sua cidade 1: \n");
    scanf ("%f", &populacao1); //quantidade da população

    printf ("qual população da sua cidade 2: \n");
    scanf ("%f", &populacao2);

    printf ("Quantos KM2 tem a sua cidade 1: \n");
    scanf ("%f", &area1); //kilometros quadrados da cidade

    printf ("Quantos KM2 tem a sua cidade 2: \n");
    scanf ("%f", &area2);

    printf ("Qual produto interno bruto da sua cidade 1: \n");
    scanf ("%f", &PIB1); 

    printf ("Qual produto interno bruto da sua cidade 2: \n");
    scanf ("%f", &PIB2); 

    printf ("Quantos são os pontos turisticos da sua cidade 1: \n");
    scanf ("%d", &pontos_tur1);

    printf ("Quantos são os pontos turisticos da sua cidade 2: \n\n");
    scanf ("%d", &pontos_tur2);

    printf("Escolha uma opção para comparar os atributos separadamente:\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("7 - Super poder\n");
    printf("8 - Ver todas opções\n");
    printf("9 - Sair..");
    scanf("%d", &opcao);
    /*SWITCH CASE*/




    /*SWITCHCASE*/

    /*CALCULO DESIDADE*/
    densidade1 = (float)populacao1 / area1; //calculo da densidade demográfica
    densidade2 = (float)populacao2 / area2; //calculo da densidade demográfica

    /*CALCULO PIB_PER_CAPITA*/
    PIB_per_capita1 = (float)PIB1 / populacao1; //calculo do PIB per capita
    PIB_per_capita2 = (float)PIB2 / populacao2; //calculo do PIB per capita


    /*CALCULO SUPER PODER*/
    superpoder1 = populacao1 + area1 + PIB1 + pontos_tur1 + PIB_per_capita1; //calculo do super poder
    superpoder2 = populacao2 + area2 + PIB2 + pontos_tur2 + PIB_per_capita2; //calculo do super poder

   /*SAIDA DE DADOS */

   switch (opcao)
    {
        case 1:
        if (populacao1 > populacao2) 
        {
            printf("A cidade %s tem mais população que a cidade %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (populacao1 < populacao2) 
        {
            printf("A cidade %s tem mais população que a cidade %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades %s e %s têm a mesma população.\n", nome_cidade1, nome_cidade2);
        }
        break;
        case 2:
        if (area1 > area2) 
        {
            printf("A cidade 1 %s é maior que a cidade 2 %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (area1 < area2) 
        {
            printf("A cidade 2 %s é maior que a cidade 1 %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades %s e %s têm a mesma área.\n", nome_cidade1, nome_cidade2);
        }   
        break;
        
        case 3:
        if (densidade1 > densidade2) 
        {
            printf("A cidade 1 %s tem uma densidade demográfica maior que a cidade 2 %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (densidade1 < densidade2) 
        {
            printf("A cidade 2 %s tem uma densidade demográfica maior que a cidade 1 %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades de %s e %s têm a mesma densidade demográfica.\n", nome_cidade1, nome_cidade2);
        }
        break;

         case 4:
        if (PIB1 > PIB2) 
        {
            printf("A cidade 1 %s tem um PIB maior que a cidade 2 %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (PIB1 < PIB2) 
        {
            printf("A cidade 2 %s tem um PIB maior que a cidade 1 %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades %s e %s têm o mesmo PIB.\n", nome_cidade1, nome_cidade2);
        }
        break;
        case 5:
        if (PIB_per_capita1 > PIB_per_capita2) 
        {
            printf("A cidade 1 %s tem um PIB per capita maior que a cidade 2 %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (PIB_per_capita1 < PIB_per_capita2) 
        {
            printf("A cidade 2 %s tem um PIB per capita maior que a cidade 1 %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades de %s e %s têm o mesmo PIB per capita.\n", nome_cidade1, nome_cidade2);
        }
        break;

        case 6:
        if (pontos_tur1 > pontos_tur2) 
        {
            printf("A cidade 1 %s tem mais pontos turisticos que a cidade 2 %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (pontos_tur1 < pontos_tur2) 
        {
            printf("A cidade 2 %s tem mais pontos turisticos que a cidade 1 %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades de %s e %s têm o mesmo número de pontos turisticos.\n", nome_cidade1, nome_cidade2);
        }
        break;

        case 7:
        if (superpoder1 > superpoder2) 
        {
            printf("A cidade 1 %s tem um super poder maior que a cidade 2 %s.\n", nome_cidade1, nome_cidade2);
        } 
        else if (superpoder1 < superpoder2) 
        {
            printf("A cidade 2 %s tem um super poder maior que a cidade 1 %s.\n", nome_cidade2, nome_cidade1);
        }
        else 
        {
            printf("As cidades de %s e %s têm o mesmo super poder.\n", nome_cidade1, nome_cidade2);
        }
    break;
     
    case 8:
        printf("O código de carta 1 inserido é: %c%s \n\n", letraestado1, cod_estado1);
        printf("O código de carta 2 inserido é: %c%s \n\n", letraestado2, cod_estado2);

        printf("A sua cidade 1 é: %s \n\n", nome_cidade1);
        printf("A sua cidade 2 é: %s \n\n", nome_cidade2);

        printf("População de %s é: %d \n\n", nome_cidade1, populacao1);
        printf("População de %s cidade 2 é: %d \n\n",nome_cidade2, populacao2);

        printf("%s cidade 1 tem: %f Kilometros quadrados.\n\n",nome_cidade1, area1);
        printf("%s cidade 2 tem: %f Kilometros quadrados.\n\n",nome_cidade2, area2);

        printf("A densidade demográfica da sua cidade 1 é: %f \n\n", densidade1);
        printf("A densidade demográfica da sua cidade 2 é: %f \n\n", densidade2);

        printf("O Produto interno bruto da sua cidade 1 é: %f \n\n", PIB1);
        printf("O Produto interno bruto da sua cidade 2 é: %f \n\n", PIB2);

        printf("O PIB per capita da sua cidade 1 é: %f \n\n", PIB_per_capita1);
        printf("O PIB per capita da sua cidade 2 é: %f \n\n", PIB_per_capita2);


        printf("Sua cidade tem %d pontos turisticos 1 :)\n\n", pontos_tur1);
        printf("Sua cidade tem %d pontos turisticos 2 :)\n\n", pontos_tur2);


        printf("O super poder da sua cidade 1 é: %f \n\n", superpoder1);
        printf("O super poder da sua cidade 2 é: %f \n\n", superpoder2);

    break;
    case 9:
        printf("Saindo do jogo...\n");
        return 0; // Encerra o programa
    break;   
    default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
    break;
    
    }

    
    
    return 0;



}
#include <stdio.h> 

 //CARTA 1;


    //O SEGUINTE CODIGO FOI FEITO DA FORMA COMO EU ENTENDI O EXERCÍCIO.
    /* Não sabendo se o codigo teria já valores pre definidos e sendo alterados no prompt para o usuario. Parti do ponto 
    que os valores serão inseridos e lidos e depois apresentados.*/

int main() 

{

    char letraestado1;
    char cod_estado1[3];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_tur1;

    printf("Insira a primeira letra do seu estado: \n");
    scanf("%c", &letraestado1); //será inserido somente 1 letra;

    printf("insira seu código sendo de 01 a 04: \n");
    scanf("%s", &cod_estado1); //será inserido um codigo de numero mas recebido no formato de string;

    printf("Qual nome da sua cidade: \n");
    scanf("%s", &nome_cidade1); //Nome da cidade;

    printf ("qual população da sua cidade: \n");
    scanf ("%d", &populacao1); //quantidade da população

    printf ("Quantos KM2 tem a sua cidade: \n");
    scanf ("%f", &area1); //kilometros quadrados da cidade

    printf ("Qual produto interno bruto da sua cidade: \n");
    scanf ("%f", &PIB1); 

    printf ("Quantos são os pontos turisticos da sua cidade: \n");
    scanf ("%d", &pontos_tur1);

    printf("O código de carta inserido é: %c%s \n\n", letraestado1, cod_estado1);

    printf("A sua cidade é: %s \n\n", nome_cidade1);

    printf("População da sua cidade é: %d \n\n", populacao1);

    printf("Sua cidade tem: %f Kilometros quadrados.\n\n", area1);

    printf("O Produto interno bruto da sua cidade é: %f \n\n", PIB1);

    printf("Sua cidade tem %d pontos turisticos :)\n\n", pontos_tur1);

    return 0;


    /*CARTA 2*/

    /* O prompt da Linha 81  está pulando os demais prompts, pesquisei muito, achei o getchar(); e o setbuf( stdin,0) para
    parar com este problema, mas sem êxito, segue exercícios para correção e possivis esclarecimentos, Grato!*/


    // char letraestado;
    // char codestado[3];
    // char nomecidade[50];
    // int populacao;
    // float area;
    // float PIB;
    // int pontos_tur;

   

    // printf("Insira a letra do seu estado:\n");
    // scanf(" %c", &letraestado);

    // printf("Selecione o código do seu estado, sendo 01 - 04: \n");
    // scanf(" %s", &codestado);
    
    // printf("Digite o nome da sua cidade: \n");
    // getchar(); /* Necessecitei usar um getchar para limpar o "buffer" pois o codigo estava pulando o prompt*/
    // fgets(nomecidade, 50, stdin);

    // printf("Insira a população da sua cidade: \n");
    // getchar();
    // scanf("%.2d", &populacao);
    
    // printf("Insira a area em KM quadrados da sua cidade: \n");
    // scanf("%.2f", &area);

    // printf("Qual produto Interno Bruto da sua cidade? \n");
  
    // scanf("%f", &PIB);
   
    // printf("Quais pontos turisticos da sua cidade: \n");
  
    // scanf("%d", &pontos_tur);

    // printf("O código de estado é: %c%s\n", letraestado, codestado);

    // printf(" O nome da cidade é: %s.\n", nomecidade);

    // printf("A população da cidade é de: %.2d\n", populacao);

    // printf("A area é: %.2f\n", area);

    // printf("O PIB é: %f\n", PIB);

    // printf("São %d pontos turisticos na cidade.", pontos_tur);



    // return 0;



}
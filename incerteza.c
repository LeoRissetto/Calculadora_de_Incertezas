#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "incerteza.h"

//funcoes destinadas para o Menu principal do projeto

void introducao()
{
    printf("\t\t\tCALCULADORA PARA CALCULAR INCERTEZAS\n\n");
    printf("\t\t\tBy LEONARDO RISSETTO\n\n");
}

void opcoes()
{
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Produto\n");
    printf("4. Potencia\n");
    printf("5. Divisao\n");
    printf("6. Cosseno\n");
    printf("7. Seno\n");
    printf("8. Logaritimo\n");
    printf("9. Exponencial\n");
    printf("10. Produto Por Constante\n");
    printf("11. Divisao Por Constante\n\n");
}

void menu()
{
    clean();
    introducao();
    printf("Digite a Operacao Desejada: \n\n");
    opcoes();
}

void casos()
{
    switch(num)
    {
        case 1 :
            soma();
            break;

        case 2 :
            subtracao();
            break;

        case 3 :
            produto();
            break;

        case 4 :
            potencia();
            break;

        case 5 :
            divisao();
            break;

        case 6 :
            cosseno();
            break;

        case 7 :
            seno();
            break;

        case 8 :
            logaritimo();
            break;

        case 9 :
            exponencial();
            break;

        case 10 :
            prodconst();
            break;

        case 11 :
            divconst();
            break;
    }
}

//funcoes destinadas para facilitar a realizacao das funcoes

void clean()
{
    system("cls");
}

void texto()
{
    printf("\n\nDigite Numero e Sua Respectiva Incerteza: \n\n");
}

void time()
{
    printf("\n\nPressione '1' Para Retornar ao Menu: ");
    scanf("%d", &temp);
}

//funcoes destinadas para a realizacao das contas e operecoes matematicas

void soma()
{
    clean();
    float nr,ir,n1,n2,i1,i2;
    texto();
    scanf("%f%f",&n1,&i1);
    texto();
    scanf("%f%f",&n2,&i2);
    nr=n1+n2;
    ir=i1+i2;
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void subtracao()
{
    clean();
    float nr,ir,n1,n2,i1,i2;
    texto();
    scanf("%f%f",&n1,&i1);
    texto();
    scanf("%f%f",&n2,&i2);
    nr=n1-n2;
    ir=i1+i2;
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void produto()
{
    clean();
    float nr,ir,n1,n2,i1,i2;
    texto();
    scanf("%f%f",&n1,&i1);
    texto();
    scanf("%f%f",&n2,&i2);
    nr=n1*n2;
    ir=(n1*i2)+(n2*i1);
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void potencia()
{
    clean();
    float nr,ir,n1,i1,e;
    texto();
    scanf("%f%f",&n1,&i1);
    printf("\n\nDigite o Expoente:\n\n");
    scanf("%d", &e);
    nr=pow(n1,e);
    ir=i1*e*pow(n1,e-1);
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void divisao()
{
    clean();
    float nr,ir,n1,n2,i1,i2;
    texto();
    scanf("%f%f",&n1,&i1);
    texto();
    scanf("%f%f",&n2,&i2);
    nr=n1/n2;
    ir=(n1*i2+n2*i1)/pow(n2,2);
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void cosseno()
{
    clean();
    float nr,ir,n1,i1;
    texto();
    scanf("%f%f", &n1, &i1);
    nr=cos(n1);
    ir=sin(n1)*i1;
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void seno()
{
    clean();
    float nr,ir,n1,i1;
    texto();
    scanf("%f%f", &n1, &i1);
    nr=sin(n1);
    ir=cos(n1)*i1;
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void logaritimo()
{
    clean();
    float nr,ir,n1,i1,b;
    printf("Digite a base, o logaritimando e sua respectiva incerteza: \n\n");
    scanf("%f%f%f", &b,&n1,&i1);
    nr=log(n1)/log(b);
    ir=i1*log(exp(1))/(log(b)*n1);
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void exponencial()
{
    clean();
    float nr,ir,n1,i1,b;
    texto();
    scanf("%f%f",&n1,&i1);
    printf("\n\nDigite a Base:\n\n");
    scanf("%f",&b);
    nr=pow(b,n1);
    ir=pow(b,n1)*i1*log(b);
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void prodconst()
{
    clean();
    float nr,ir,n1,i1,c;
    texto();
    scanf("%f%f",&n1,&i1);
    printf("\n\nDigite a Constante:\n\n");
    scanf("%f",&c);
    nr=n1*c;
    ir=i1*c;
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

void divconst()
{
    clean();
    float nr,ir,n1,i1,c;
    texto();
    scanf("%f%f",&n1,&i1);
    printf("\n\nDigite a Constante:\n\n");
    scanf("%f",&c);
    nr=n1/c;
    ir=i1/c;
    printf("\n\nO Resultado eh: (%f +- %f)\n",nr,ir);
    time();
}

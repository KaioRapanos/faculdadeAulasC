#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//extrutura de dados heterogenias dados de diferentes tipos
struct produto
{
    int codigo;
    char nome[30];
    float valorVenda;
};



int main(){

    setlocale(LC_ALL, "");

    //extrutura de dados homogeneas
    //vetor ou array dados do mesmo tipo    
    int idades[5];

    idades[0] = 20;
    idades[1] = 30;
    idades[2] = 40;
    idades[3] = 50;
    idades[4] = 60;

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a idade da pessoa do numero %d\n",(i+1));
        fflush(stdin);
        scanf("%d", &idades[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("A idade da pessoa do numero %d e %d\n",(i+1),idades[i]);
    }
    

    char nome[50] = "Rogerio Napoleao Junior\n";
    printf("%s",nome);

    char nomeScan[50];
    printf("Digite o seu nome \n");
    fflush(stdin);
    //scanf("%s", &nome1);
    gets(nomeScan); //não á a necessidade do &
    printf("%s\n", nomeScan);

    //nome  = "joao" nao funciona o jeito certo é
    strcpy(nome/*Destino*/,nomeScan/*Origem*/);
    printf("%s\n", nome);
    printf("%s\n", nomeScan);

    //strcmp e a comparação de strings essa função retorna um bool
    if(strcmp(nome,nomeScan)==0){
        printf("As variaveis sao iguais\n");
    }


    //Manipulação de Matriz
    int notas[5][3];
    int j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite as notas do aluno %d e a sua nota %d =\n",(i+1),(j+1));
            scanf("%d",&notas[i][j]);
        }
        
    }
    for (i = 0; i < 5; i++)
    {
        printf("As notas do aluno %d sao ",(i+1));
        for (j = 0; j < 3; j++)
        {
            printf("%d ",notas[i][j]);
        }
        printf("\n");        
    }

    //structs - registros
    //Criação de uma struct produto e adição dos dados
    struct produto p;
    printf("cadastro de produto\n");
    printf("digite o codigo do produto\n");
    fflush(stdin);
    scanf("%d", &p.codigo);
    printf("digite o nome do produto\n");
    fflush(stdin);
    gets(p.nome);
    printf("digite o valor de venda do produto\n");
    fflush(stdin);
    scanf("%f", &p.valorVenda);

    printf("%d %s %.2f",p.codigo,p.nome,p.valorVenda);

    return 0;
}













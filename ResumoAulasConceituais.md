<p>Aula 1
algoritimo sequencia de passo finito e nao ambiguo
linguagem C nao depende de um hardware especifico
combina vantagem de linguagem de alto nivel com eficiencia de linguagem de maquina
Integrated Develop Environments (IDEs)
phyton java linguagens interpretadas
C linguagem compilada
codigo-fonte -> compilador -> programa-objeto -> bibliotecas-linkeditor -> programa-executavel
#include <stdio.h>
int main(){
     printf("Hello, word"); 
     return 0;   
}
stdio essa biblioteca de interação com usuario
</p>
Aula 2

Sintaxe e a extrutura da linguagem
    regras para se escrever o codigo
    ordem de escreta do codigo
    pontuação

Semântica e o significado do codigo
    passo a passo para sua resolução 
    logica de programação 

Não se pode iniciar uma variavel com numero, espaco, caracter, especial.

char int float double bool enum void pointer
para se usar o bool precisa da biblioteca stdbool.h

modificadores de tipos primitivos insigned.duplica a faixa de valor, 
short reduz a capacidade de armazenamento, 
long aumentar a capacidade de armazenamento,

long int
unsigned float

palavras reservadas, exemplos: int float double, 
if else do while, typedef, struct, union

Aula 3

variaveis são espaços em memoria 
um tipo e um identificador
<Tipo><Identificador>

float salario;
int idade, ano;
char nome[20];
bool brasileiro;

para se declarar uma constante usa-se
#define <identidicador><valor>
#define PI 3.1416
#define MSG-ERRO "Erro"

Aula 4

Operadores aritméticos
+ - / *
Operadores relacionais
== <= >= != || && !
if(A < 10 && A > 0)

Aula 5

Funções intrínsecas
É preciso identificar a qual biblioteca essa função pertence.

exemplo de função intrínsecas:
ceil(x), abs(x), pow(x)...
printf("Texto");
scanf("%d",&num);

bibliotecas basicas 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float A = 4, resultado;
    resultado = sqrt(A);
}

Aula 6

Entrada de dados
leitura scanf("<tipo_variavel>",&<variável>);
escrita printf("texto <tipo_variavel>",<variável>);

especidicadores de formato comando interno de uma string

"%d" int
"%f" float
"%e" double
"%c" char
"%s" vetor de char

\n quebra de linha
\0 fim de uma string

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite a idade:\n");
    scanf("%d",&idade);
    printf("A idade digitada foi = %d", idade);
}

Aula 7 e 8

estruturas condicionais ou de decisão

if(<exprssão lógica>){
    <bloco de comandos>
}

comando que definem outro bloco de comando não usao o ponto e virgula ;

contrução do programa

#include <stdin.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: \n");
    scanf("%d",&num);
    if(num > 10){
        printf("O numero digitado %d é maior que 10",num);
    }
}

exemplo:

#include <stdin.h>
#include <stdlib.h>

int main(){
    float num;
    printf("Digite um numero: \n");
    scanf("%f",&num);
    if(num > 10 && num < 20){
        printf("O numero digitado %d é maior que 10 e menor que 20",num);
    }
}

Aula 9

extruturas compostas
if else

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, resto;
    printf("Digite um número: \n");
    scanf("%d", &num);
    resto = num / 2;
    resto = num - (resto*2);
    if(resto == 0){
        printf("Par!");
    }else {
        printf("Ímpar!");
    }
}

Aula 10 e 11

extruturas condicionais aninhadas

simples = if
composta = if else
múltiplas = switch case

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: \n");
    scanf("%d",&num);
    switch(num){
        case 1: printf("Domingo..\n");
            break;
        case 2: printf("Segunda..\n");
            break;
        case 3: printf("Terça..\n");
            break;
        default : printf("numero invalido..\n");
            break;
    }
}



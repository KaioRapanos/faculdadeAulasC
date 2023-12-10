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
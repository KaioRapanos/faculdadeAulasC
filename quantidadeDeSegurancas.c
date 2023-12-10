#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    int quantidadeIngressos = 0;

    printf("Digite a quantidade de ingressos\n");
    scanf("%d", &quantidadeIngressos);

    //considerando que o switch case não possui a extenção do GNU C Compiler.
    if(quantidadeIngressos <= 1000){
        printf("Serão necessarios 4 segurancas");
    }else if(quantidadeIngressos > 1000 && quantidadeIngressos <= 5000){
        printf("Serão necessarios 6 segurancas");
    }else if(quantidadeIngressos > 5000 && quantidadeIngressos <= 10000){
        printf("Serão necessarios 10 segurancas");
    }else if(quantidadeIngressos > 10000 && quantidadeIngressos <= 20000){
        printf("Serão necessarios 15 segurancas");
    }else if(quantidadeIngressos > 20000 && quantidadeIngressos <= 50000){
        printf("Serão necessarios 25 segurancas");
    }else {
        printf("Serão necessarios autorizações especias");
    }
}
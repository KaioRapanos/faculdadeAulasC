
#include <stdio.h>
#include <string.h>
int main()
{
            char A[7] = {'P','i','e','t','r','o','\0'};
            char B[8] = {'M','a','r','t','i','n','s','\0'};
            char C[20];
            strcpy(C, A);
            strcat(C, B);
            printf("Texto: \"%s\".\n", C);
            return (0);
            
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int main() {
//     setlocale(LC_ALL, "");

//     int quantidadeIngressos = 0;

//     printf("Digite a quantidade de ingressos\n");
//     scanf("%d", &quantidadeIngressos);

//     int numSegurancas;

//     switch (quantidadeIngressos) {
//         case 1 ... 1000:
//             numSegurancas = 4;
//             break;
//         case 1001 ... 5000:
//             numSegurancas = 6;
//             break;
//         case 5001 ... 10000:
//             numSegurancas = 10;
//             break;
//         case 10001 ... 20000:
//             numSegurancas = 15;
//             break;
//         case 20001 ... 50000:
//             numSegurancas = 25;
//             break;
//         default:
//             printf("Serão necessários autorizações especiais\n");
//             return 0;
//     }

//     printf("Serão necessários %d seguranças\n", numSegurancas);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int main(){

//     setlocale(LC_ALL, "");

//     int quantidadeIngressos = 0;

//     printf("Digite a quantidade de ingressos\n");
//     scanf("%d", &quantidadeIngressos);

//     if(quantidadeIngressos <= 1000){
//         printf("Serão necessarios 4 segurancas");
//     }else if(quantidadeIngressos > 1000 && quantidadeIngressos <= 5000){
//         printf("Serão necessarios 6 segurancas");
//     }else if(quantidadeIngressos > 5000 && quantidadeIngressos <= 10000){
//         printf("Serão necessarios 10 segurancas");
//     }else if(quantidadeIngressos > 10000 && quantidadeIngressos <= 20000){
//         printf("Serão necessarios 15 segurancas");
//     }else if(quantidadeIngressos > 20000 && quantidadeIngressos <= 50000){
//         printf("Serão necessarios 25 segurancas");
//     }else {
//         printf("Serão necessarios autorizações especias");
//     }
// }



// #include <stdio.h>

// int main(){
//     int i;
//     for ( i = 0; i <= 100; (i=i+2))
//     {
//         printf("%d\n",i);
//     }
//     i = 5;
//     i++;
//     printf("%i\n",i);

//     int j, N = 3, res;
//     for(j = 1; j <= 10; j++){
//         res = N * j;
//         printf("%d x %d = %d\n", j, N, res);
//     }
// #include <stdio.h>
 
// int fat(int n){
//     if(n == 1)
//         return 1;
//     else
//         return n * fat(n-1);
// }
 
// int main()
// {
//     int num, res;
//     printf ("Informe o número:\n");
//     scanf ("%d", &num);
//     res = fat(num);
//     printf ("O fatorial é: %d\n", res);
//     return (0);
// }


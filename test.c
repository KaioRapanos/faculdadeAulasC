// Aula 1
// algoritimo sequencia de passo finito e nao ambiguo
// linguagem C nao depende de um hardware especifico
// combina vantagem de linguagem de alto nivel com eficiencia de linguagem de maquina
// Integrated Develop Environments (IDEs)
// phyton java linguagens interpretadas
// C linguagem compilada
// codigo-fonte -> compilador -> programa-objeto -> bibliotecas-linkeditor -> programa-executavel
// #include <stdio.h>
// int main(){
//     printf("Hello, word"); 
//     return 0;   
// }
// stdio essa biblioteca de interação com usuario





// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <stdbool.h>

// //Registro
// struct Consulta
// {
//     char nome[100];
//     int dia;
//     int hora;
// };

// //Variaveis Globais
// struct Consulta agenda[300];
// int qtdAgendamento;

// bool verificarDisponibilidade(int diaAgendamento, int horaAgenda){

//     if(horaAgenda < 8 || horaAgenda > 20){
//         printf("Clínica fechada neste horário\n");
//         return false;
//     }
//     return true;
// }

// void agendarConsulta(){

//     int diaAgenda;
//     printf("Qual dia do mês você quer agendar?\n");
//     fflush(stdin);
//     scanf("%d", &diaAgenda);

//     int horaAgenda;
//     printf("Qual hora do dia você quer agendar?\n");
//     fflush(stdin);
//     scanf("%d", &horaAgenda);

//     bool verfificador = verificarDisponibilidade(diaAgenda,horaAgenda);
//     if(verfificador){
//         printf("horário disponivel\n");
//         printf("Vamos confirmar seu agendamento\n");
//         agenda[qtdAgendamento].dia = diaAgenda;
//         agenda[qtdAgendamento].hora = horaAgenda;
//         printf("Qual seu nome?\n");
//         fflush(stdin);
//         gets(agenda[qtdAgendamento].nome);
//         qtdAgendamento++;
//         printf("Agendamento realizado!\n");
//     }
//     else {

//         printf("horário não disponivel\n");
//     }
// }

// void listaConsulta(){
//     int i;
//     for ( i = 0; i < qtdAgendamento; i++)
//     {
//         printf("======================\n");
//         printf("Nome: %s\n", agenda[i].nome);
//         printf("Dia: %d\n",agenda[i].dia);
//         printf("Hora: %d\n",agenda[i].hora);
//     }
    
// }

// void main() {

//     setlocale(LC_ALL, "");
//     int opcao;
//     qtdAgendamento = 0;

//     do{
//         printf("Digite um opcão desejada?\n");
//         printf("1 - Agendar\n");
//         printf("2 - Listar\n");
//         printf("3 - Sair\n");
//         fflush(stdin);
//         scanf("%d", &opcao);

//         switch (opcao)
//         {
//         case 1:
//             agendarConsulta();
//             break;
        
//         case 2:
//             listaConsulta();
//             break;

//         case 3:
//             printf("Saindo do programa...\n");;
//             break;
        
//         default:
//             printf("Opção inválida\n");
//             break;
//         }

//     }while (opcao !=3);   
// }




// //extrutura de dados homogeneas
// //vetor array 
// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>
// #include <string.h>

// //extrutura de dados heterogenias
// struct produto
// {
//     int codigo;
//     char nome[30];
//     float valorVenda;
// };



// int main(){

//     setlocale(LC_ALL, "");
    
//     int idades[5];

//     idades[0] = 20;
//     idades[1] = 30;
//     idades[2] = 40;
//     idades[3] = 50;
//     idades[4] = 60;

//     int i;

//     //float precos[10];
    

//     for (i = 0; i < 5; i++)
//     {
//         printf("Digite a idade da pessoa do numero %d\n",(i+1));
//         fflush(stdin);
//         scanf("%d", &idades[i]);
//     }
    
//     for ( i = 0; i < 5; i++)
//     {
//         printf("A idade da pessoa do numero %d e %d\n",(i+1),idades[i]);
//     }
    

//     char nome[50] = "Rogerio Napoleao Junior\n";
//     printf("%s",nome);

//     char nomeScan[50];
//     printf("Digite o seu nome \n");
//     fflush(stdin);
//     //scanf("%s", &nome1);
//     gets(nomeScan); //não á a necessidade do &
//     printf("%s\n", nomeScan);

//     //nome  = "joao" nao funciona o jeito certo é
//     strcpy(nome/*Destino*/,nomeScan/*Origem*/);
//     printf("%s\n", nome);
//     printf("%s\n", nomeScan);

//     if(strcmp(nome,nomeScan)==0){
//         printf("As variaveis sao iguais\n");
//     }


//     //Matriz
//     int notas[5][3];
//     int j;

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Digite as notas do aluno %d e a sua nota %d =\n",(i+1),(j+1));
//             scanf("%d",&notas[i][j]);
//         }
        
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("As notas do aluno %d sao ",(i+1));
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ",notas[i][j]);
//         }
//         printf("\n");        
//     }

//     //structs - registros
//     struct produto p;
//     printf("cadastro de produto\n");
//     printf("digite o codigo do produto\n");
//     fflush(stdin);
//     scanf("%d", &p.codigo);
//     printf("digite o nome do produto\n");
//     fflush(stdin);
//     gets(p.nome);
//     printf("digite o valor de venda do produto\n");
//     fflush(stdin);
//     scanf("%f", &p.valorVenda);

//     printf("%d %s %.2f",p.codigo,p.nome,p.valorVenda);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//             char A[7] = {'P','i','e','t','r','o','\0'};
//             char B[8] = {'M','a','r','t','i','n','s','\0'};
//             char C[20];
//             strcpy(C, A);
//             strcat(C, B);
//             printf("Texto: \"%s\".\n", C);
//             return (0);

// }

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


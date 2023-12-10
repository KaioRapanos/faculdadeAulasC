#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//Registro declaração de um novo tipo
struct Consulta
{
    char nome[100];
    int dia;
    int hora;
};

//Variaveis Globais vistas em qualquer ambiente do codigo
struct Consulta agenda[300];
int qtdAgendamento;

//Função booleana retorna True or False
bool verificarDisponibilidade(int diaAgendamento, int horaAgenda){

    if(horaAgenda < 8 || horaAgenda > 20){
        printf("Clínica fechada neste horário\n");
        return false;
    }
    return true;
}

//Função Void não retorna nenhum dado, e vista em teoria como PROCEDIMENTO
void agendarConsulta(){

    int diaAgenda;
    printf("Qual dia do mês você quer agendar?\n");
    fflush(stdin);
    scanf("%d", &diaAgenda);

    int horaAgenda;
    printf("Qual hora do dia você quer agendar?\n");
    fflush(stdin);
    scanf("%d", &horaAgenda);

    bool verfificador = verificarDisponibilidade(diaAgenda,horaAgenda);
    if(verfificador){
        printf("horário disponivel\n");
        printf("Vamos confirmar seu agendamento\n");
        agenda[qtdAgendamento].dia = diaAgenda;
        agenda[qtdAgendamento].hora = horaAgenda;
        printf("Qual seu nome?\n");
        fflush(stdin);
        gets(agenda[qtdAgendamento].nome);
        qtdAgendamento++;
        printf("Agendamento realizado!\n");
    }
    else {

        printf("horário não disponivel\n");
    }
}

//Função Void não retorna nenhum dado, e vista em teoria como PROCEDIMENTO
void listaConsulta(){
    int i;
    for ( i = 0; i < qtdAgendamento; i++)
    {
        printf("======================\n");
        printf("Nome: %s\n", agenda[i].nome);
        printf("Dia: %d\n",agenda[i].dia);
        printf("Hora: %d\n",agenda[i].hora);
    }
    
}

//Programa principal toda e qualquer função será executada 
//Respeitando as expressões condicionais e seguindo o fluxo
void main() {

    setlocale(LC_ALL, "");
    int opcao;
    qtdAgendamento = 0;

    do{
        printf("Digite um opcão desejada?\n");
        printf("1 - Agendar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            agendarConsulta();
            break;
        
        case 2:
            listaConsulta();
            break;

        case 3:
            printf("Saindo do programa...\n");;
            break;
        
        default:
            printf("Opção inválida\n");
            break;
        }

    }while (opcao !=3);   
}
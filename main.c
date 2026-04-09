#include <stdio.h>
#include <stdlib.h>
#include "globals.h"
#include "ia_logic.c"

//Variáveis
double maior_acuracia = 0.0;
int tempo_total_segundos = 0;
double taxa_aprendizado = 0.0;
double acuracia_anterior = 0.0;
double acuracia_atual = 0.0;
int total_ciclos = 0;
double acuracia_total = 0.0;
double menor_erro = 100.0; 
double maior_erro = 0.0;


int main(){
    //Introdução
    printf("Ola, sejam bem vindos ao Simulador de Modelo de Inteligencia Artificial.\n");
    printf("Desenvolvedores:\n Arthur N.,\n Dimitre C.,\n Nicolas R.,\n Guilherme A.,\n Kaiky C.,\n Kevin I.,\n Jardson A.\n\n");

    //Opções do menu
    int opcao;
    do{
        printf("-- Escolha uma opcao --\n");
        printf("Opcao 1: Processar nova epoca (ciclo)\n");
        printf("Opcao 2: Visualizar metricas do modelo\n");
        printf("Opcao 3: Ajustar Taxa de Aprendizado\n");
        printf("Opcao 4: Encerrar o programa\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            system("cls");
            int ciclo = CICLO();
            

            printf("%do Ciclo\n", ciclo);

            printf("* Opcao %d selecionada:\n", opcao);
            double aux_erro_atual; //variável auxiliar de erro atual

            printf("-> Insira  a %% de acuracia atual: ");
            while (scanf("%lf", &acuracia_atual) != 1 || acuracia_atual > 100 || acuracia_atual < 0){
                printf("-> Insira corretamente a %% de acuracia atual (entre 0%% - 100%%): ");

                while (getchar() != '\n');
            };

            printf("-> Insira a taxa de erro: ");
            while (scanf("%lf", &aux_erro_atual) != 1 || aux_erro_atual < 0) {
                printf("-> Insira a taxa de erro corretamente (apenas valores positivos): ");
                
                while (getchar() != '\n');
            }

            ERROS(aux_erro_atual); 

            printf("-> Insira o tempo de processamento em segundos: ");
            int tempo_epoca;
            while (scanf("%d", &tempo_epoca) != 1 || tempo_epoca < 0) {
                printf("-> Insira um tempo valido: ");
                while (getchar() != '\n');
            }
            tempo_total_segundos += tempo_epoca; 

            ACURACIA_TOTAL(acuracia_atual); 

            printf("Dados processados com sucesso!\n\n");
            break;

        case 2:
            system("cls");
            printf("* Opcao %d selecionada - Metricas do Modelo:\n", opcao);
            printf("-> Quantidade total de Ciclos: %d\n", total_ciclos);
            printf("-> Acuracia Total: %.2lf\n", acuracia_total); 
            printf("-> Maior erro registrado: %.2lf\n", maior_erro); 
            printf("-> Menor erro registrado: %.2lf\n", menor_erro); 

            break;

        case 3:
            system("cls");
            printf("* Opcao %d selecionada: ->...\n", opcao);
            
            ajustar_acuracia_ia();

            break;

        case 4:
            system("cls");
            printf("* Opcao %d selecionada: -> Encerrando programa\n", opcao);
            break;
        
        default:
            system("cls");
            printf("* Opcao %d nao existe -> Digite uma opcao valida.\n", opcao);
            break;
        }

    }while (opcao != 4);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include "globals.h"

// Lógica de Ajuste da Acurácia f(x) = Acurácia + (taxa x 0,1)
// tipo_ajuste: 1 para Bônus, 2 para Penalidade
void AJUSTAR_ACURACIA_IA() {
    double fator = taxa_aprendizado * 0.1;
    int tipo_ajuste;

    printf("-- Digite a opcao que deseja --\n");
    printf("    1- Aplicar um bonus na taxa de aprendizado\n");
    printf("    2- Aplicar uma penalidade na taxa de aprendizado\n");
    printf("    Escolha uma opcao: ");
    scanf("%d", &tipo_ajuste);

    
    if (tipo_ajuste == 1) { // Bônus
        system("cls");
        acuracia_atual = acuracia_atual + fator;
        printf("O bonus foi aplicado!\n");
    } else if (tipo_ajuste == 2) { // Penalidade
        system("cls");
        acuracia_atual = acuracia_atual - fator;
        printf("A penalidade foi aplicada!\n");
    } else if(tipo_ajuste != 1 || tipo_ajuste != 2){
        system("cls");
        printf("Opcao invalida digite um outro valor\n");
    }

    // Garante que a acurácia fique entre 0 e 100
    if (acuracia_atual > 100.0) acuracia_atual = 100.0;
    if (acuracia_atual < 0.0) acuracia_atual = 0.0;
}

// Sistema de Alertas (Overfitting vs Aprendizado)
void VERIFICAR_STATUS_MODELO(double erro_atual) {
    // Regra de Overfitting: Acurácia caiu OU erro > 5.0
    if (acuracia_atual < acuracia_anterior || erro_atual > 5.0) {
        printf("[!] Aviso Critico: O modelo esta sofrendo Overfitting\n\n");
    } 
    // Regra de Sucesso: Acurácia subiu OU erro <= 1.5
    else if (acuracia_atual > acuracia_anterior || erro_atual <= 1.5) {
        printf("[+] Sistema aprendendo\n\n");
    }
}

// Converte o tempo_total_segundos acumulado
void EXIBIR_TEMPO_PROCESSAMENTO(int tempo_total_segundos) {
    horas = 0;
    minutos = 0;
    segundos_restantes = tempo_total_segundos;

    for (; segundos_restantes >= 60; segundos_restantes -= 60) {
        minutos++;
    }
    for (; minutos >= 60; minutos -= 60){
        horas++;
    }
}

double MEDIA_TEMPO_GASTO(int tempo_total_segundos, int total_ciclos){
    if (total_ciclos == 0) return 0; 
    return (double)tempo_total_segundos / total_ciclos;
}

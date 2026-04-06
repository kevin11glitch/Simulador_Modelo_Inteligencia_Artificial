#include <stdio.h>
#include <math.h>
#include "globals.h"

// Lógica de Ajuste da Acurácia f(x) = Acurácia + (taxa x 0,1)
// tipo_ajuste: 1 para Bônus, 2 para Penalidade
void ajustar_acuracia_ia(int tipo_ajuste) {
    double fator = taxa_aprendizado * 0.1;
    
    if (tipo_ajuste == 1) { // Bônus
        acuracia_atual = acuracia_atual + fator;
    } else if (tipo_ajuste == 2) { // Penalidade
        acuracia_atual = acuracia_atual - fator;
    }

    // Garante que a acurácia fique entre 0 e 100
    if (acuracia_atual > 100.0) acuracia_atual = 100.0;
    if (acuracia_atual < 0.0) acuracia_atual = 0.0;
}

// Sistema de Alertas (Overfitting vs Aprendizado)
void verificar_status_modelo(double erro_atual) {
    // Regra de Overfitting: Acurácia caiu OU erro > 5.0
    if (acuracia_atual < acuracia_anterior || erro_atual > 5.0) {
        printf("\n[!] Aviso Critico: O modelo esta sofrendo Overfitting\n");
    } 
    // Regra de Sucesso: Acurácia subiu OU erro <= 1.5
    else if (acuracia_atual > acuracia_anterior || erro_atual <= 1.5) {
        printf("\n[+] Sistema aprendendo\n");
    }
}

// Converte o tempo_total_segundos acumulado
void exibir_tempo_processamento() {
    int segundos_restantes = tempo_total_segundos;
    int horas = 0, minutos = 0;

    // Usando laços for conforme solicitado, mas parando em Horas
    for (; segundos_restantes >= 3600; segundos_restantes -= 3600) {
        horas++;
    }
    for (; segundos_restantes >= 60; segundos_restantes -= 60) {
        minutos++;
    }

    printf("Tempo total de processamento: %d Horas, %d Minutos e %d Segundos.\n", 
            horas, minutos, segundos_restantes);
}
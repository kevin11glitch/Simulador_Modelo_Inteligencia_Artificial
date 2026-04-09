#include <stdio.h>
#include <stdlib.h>
#include "globals.h"



double ACURACIA_TOTAL(double acuracia_atual){
    acuracia_total += acuracia_atual;
    if (maior_acuracia < acuracia_atual){
        maior_acuracia = acuracia_atual;
    }
    
    return acuracia_total, maior_acuracia;
};

double ERROS(double aux_erro_atual){
    if (aux_erro_atual > maior_erro){
        maior_erro = aux_erro_atual;
    };
    if (aux_erro_atual < menor_erro){
        menor_erro = aux_erro_atual;
    };

    return maior_erro, menor_erro;
}



int CICLO(){
    return ++total_ciclos;
};
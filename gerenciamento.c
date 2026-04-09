#include <stdio.h>
#include <stdlib.h>
#include "globals.h"



double ACURACIA_TOTAL(double acuracia_atual){
    acuracia_total += acuracia_atual;
    
    return acuracia_total;
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
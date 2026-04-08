#include <stdio.h>
#include <stdlib.h>
#include "globals.h"

int total_ciclos = 0;
double acuracia_total = 0.0;


double ACURACIA_TOTAL(double acuracia_atual){
    acuracia_total += acuracia_atual;
    
    return acuracia_total;
};


int CICLO(){
    return ++total_ciclos;
};
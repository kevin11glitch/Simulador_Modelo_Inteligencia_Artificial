#include <math.h>
#include "globals.h"

// Funções auxiliares internas
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

double sigmoid_derivada(double saida_ativada) {
    return saida_ativada * (1.0 - saida_ativada);
}

void treinar_logica_ia() {
    double soma_z = bias;

    // 1. Forward Pass (Soma Ponderada usando as globais)
    for (int i = 0; i < num_entradas; i++) {
        soma_z += pesos[i] * entradas[i];
    }
    
    double previsao = sigmoid(soma_z);

    // 2. Cálculo do Erro e do Gradiente (Delta)
    double erro = previsao - alvo;
    double delta = erro * sigmoid_derivada(previsao);

    // 3. Atualização das Variáveis Globais (Backpropagation)
    for (int i = 0; i < num_entradas; i++) {
        pesos[i] -= taxa_aprendizado * delta * entradas[i];
    }
    bias -= taxa_aprendizado * delta;
}
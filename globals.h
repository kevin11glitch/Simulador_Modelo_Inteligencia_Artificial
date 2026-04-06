#ifndef GLOBALS_H
#define GLOBALS_H

// --- Estado do Sistema ---
extern int total_ciclos;  
extern double soma_acuracia;     

// --- Métricas de Desempenho ---
extern double maior_acuracia;       
extern double menor_erro;    
extern double maior_erro;   
   

// --- Tempo ---
extern int tempo_total_segundos;    

// --- Parâmetros de Aprendizado ---
extern double taxa_aprendizado;
extern double acuracia_anterior;  
extern double acuracia_atual;


// Configurações da Rede
extern double pesos[2];      
extern double entradas[2];
extern double bias;
extern double alvo;
extern int num_entradas;

// Protótipo da função de treino
void treinar_logica_ia();
double sigmoid(double x);

#endif
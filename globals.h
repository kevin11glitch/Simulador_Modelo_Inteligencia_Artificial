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

#endif
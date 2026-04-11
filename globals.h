#ifndef GLOBALS_H
#define GLOBALS_H


extern int total_ciclos;  
extern double acuracia_total;     

extern double maior_acuracia; 
int CICLO();
void ACURACIA_TOTAL(double acuracia_atual);      
extern double menor_erro;    
extern double maior_erro;
void ERROS(double acuracia_atual);   

extern int tempo_total_segundos;  
extern int horas;
extern int minutos;
extern int segundos_restantes;  

extern double taxa_aprendizado;
extern double acuracia_anterior;  
extern double acuracia_atual;

void AJUSTAR_ACURACIA_IA();
void VERIFICAR_STATUS_MODELO(double erro_atual);
void EXIBIR_TEMPO_PROCESSAMENTO(int tempo_total_segundos);
double MEDIA_TEMPO_GASTO(int tempo_total_segundos, int total_ciclos);

#endif
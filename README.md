# Simulador de Modelo de Treinamento de Inteligencia Artificial
Projeto I dedicado à matéria de Laboratório de Programação 2026.1
### Aplicação das Especificações no Tema 

Ao rodar o código executável, o prompt exibe integrantes, tema, boas-vindas e menu contendo: 
- Opção 1: Processar nova época (ciclo): Solicita a % de acurácia atual, a taxa de erro e o tempo de processamento em segundos;
- Opção 2: Visualizar métricas do modelo: Mostra a maior acurácia já atingida e a média de tempo gasto até o momento;
- Opção 3: Ajustar Taxa de Aprendizado: Permite ao usuário aplicar uma penalidade ou bônus matemático nas próximas épocas inseridas;
- Opção 4: Encerrar o programa. 


Validação: 
- O usuário não pode digitar opções inválidas caso isso ocorra o sistema precisa solicitar a entrada correta;
- A acurácia precisa estar entre 0 e 100. O sistema não aceita números diferentes;
- A taxa de erro não pode ser negativa. 


Gerenciamento de Estado: O sistema precisa mostrar as seguintes métricas: ciclos, acurácia total, menor e maior erro registrado, tempo de treinamento, tempo gasto em hh:mm:ss. 


Lógica Aninhada: 
- A taxa de aprendizado é diretamente proporcional a acurácia e precisa ter um menu para definir se será uma penalidade ou um bônus que precisa seguir a seguinte fórmula 𝑓(𝑥) = 𝐴𝑐𝑢𝑟á𝑐𝑖𝑎 + (𝑡𝑎𝑥𝑎 𝑥 0,1) ;
- Se a acurácia atual for menor que acurácia anterior ou se a taxa de erro passar de um limite crítico de 5,0 o sistema dispara um alerta "Aviso Crítico: O modelo está sofrendo Overfitting”; 
- Se a acurácia atual for maior que acurácia ou se a taxa de erro não ultrapassar 1,5 o sistema dispara um alerta “Sistema aprendendo”;
- Utilizar a conversão de dias horas e minutos no tema proposto utilizando laços de repetição for Sistema de conversão Os dados da opção 3 precisam ser convertidos de acordo com as especificações dos requisitos gerais.


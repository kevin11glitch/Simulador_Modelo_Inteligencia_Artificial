# 🧠 Simulador de Modelo de Inteligência Artificial

Este projeto é um simulador de processamento e métricas de treinamento de IA desenvolvido em **Linguagem C**. A aplicação permite gerenciar ciclos de aprendizado, monitorar taxas de erro e ajustar a acurácia do modelo de forma dinâmica através de uma interface de terminal.

---

### 🎓 Contexto Acadêmico
Este software foi desenvolvido como parte das atividades da disciplina de **Laboratório de Programação** do curso de **Engenharia de Software** na **Universidade Federal do Ceará (UFC), Campus Russas**. O objetivo do trabalho é aplicar conceitos de modularização, manipulação de variáveis globais e lógica de programação estruturada.

**Equipe de Desenvolvedores:**
* **Kevin Iohan**, Arthur Nogueira, Dimitre Cavalcante, Nicolas Rodrigues, Guilherme Almeida, Kaiky Caldas, , Jardson Alef

---

## 🚀 Funcionalidades

O simulador oferece um menu interativo com as seguintes capacidades:

1.  **Processar Nova Época (Ciclo)**: Simula o processamento de uma etapa de treinamento, registrando acurácia, erros e tempo gasto.
2.  **Visualizar Métricas do Modelo**: Exibe um relatório detalhado contendo:
    * Acurácia atual e total acumulada.
    * Recorde de maior acurácia atingida.
    * Intervalo de erros (maior e menor erro registrado).
    * Tempo total de treinamento (em formato `hh:mm:ss`).
    * Média de tempo gasto por ciclo.
3.  **Ajustar Taxa de Aprendizado**: Permite ao usuário intervir no modelo aplicando bônus ou penalidades na taxa de aprendizado, influenciando diretamente a acurácia.
4.  **Monitoramento de Status (Alerta)**: Sistema inteligente que detecta e avisa o usuário sobre possíveis casos de *Overfitting* ou confirma quando o sistema está aprendendo corretamente.

## 🛠️ Tecnologias e Conceitos Aplicados

-   **Linguagem C**: Uso de bibliotecas padrão (`stdio.h`, `stdlib.h`, `math.h`).
-   **Modularização**: Divisão do código em arquivos lógicos (`main.c`, `ia_logic.c`, `gerenciamento.c`) para melhor manutenção.
-   **Header Files**: Uso de `globals.h` para definição de protótipos de funções e compartilhamento de variáveis via `extern`.
-   **Lógica Matemática**: Cálculos de médias, conversão de tempo e ajustes baseados em taxas de aprendizado.

## 📂 Estrutura do Projeto

* `main.c`: Ponto de entrada do programa e controle do menu principal.
* `globals.h`: Arquivo de cabeçalho com as definições globais e assinaturas das funções.
* `ia_logic.c`: Implementação da lógica de ajuste de acurácia, verificação de status e cálculos de tempo.
* `gerenciamento.c`: Funções auxiliares para contagem de ciclos e registro de recordes (acurácia e erros).

## 📋 Como Executar

1.  Certifique-se de ter um compilador C (como o GCC) instalado.
2.  Clone o repositório:
    ```bash
    git clone (https://github.com/kevin11glitch/Simulador_Modelo_Inteligencia_Artificial.git)
    ```
3.  Compile todos os arquivos juntos:
    ```bash
    gcc main.c gerenciamento.c -o simulador_ia
    ```
4.  Execute a aplicação:
    ```bash
    ./simulador_ia
    ```

---
## 🎓 Contexto Acadêmico
Desenvolvido por Kevin Iohan Mendes de Sousa, este projeto é o resultado de estudos aprofundados em Engenharia de Software na Universidade Federal do Ceará (UFC), Campus Russas. O objetivo principal é demonstrar como algoritmos fundamentais e estruturas de dados dinâmicas formam a espinha dorsal de sistemas inteligentes modernos.

*Projeto desenvolvido com fins didáticos para a matéria de Laboratório de Programação | UFC Russas.*

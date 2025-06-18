# Projeto Xadrez: Demonstração de Movimentos em C

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Concluído-brightgreen.svg)
![Licença](https://img.shields.io/badge/Licença-MIT-yellow.svg)

Este projeto é uma demonstração técnica em C focada na implementação de movimentos de peças de xadrez utilizando estruturas de controle de fluxo avançadas. O objetivo principal não é criar um jogo de xadrez jogável, but sim aplicar e explorar os conceitos de **recursividade** e **laços complexos** para simular os padrões de movimento das peças.

## ✨ Funcionalidades e Implementações

O programa demonstra o movimento das seguintes peças, cada uma com uma técnica de implementação específica, conforme os requisitos do desafio:

-   **Torre (Recursividade):** O movimento em linha reta (vertical/horizontal) é simulado através de uma função recursiva que se chama até que o número desejado de casas tenha sido percorrido.

-   **Bispo (Recursividade e Laços Aninhados):** O movimento do Bispo é demonstrado de duas formas:
    1.  **Recursiva:** Semelhante à Torre, mas para movimentos diagonais.
    2.  **Laços Aninhados:** Utilizando um laço externo para o deslocamento vertical e um interno para o horizontal, com uma condição `if` para imprimir o passo apenas nas coordenadas da diagonal.

-   **Rainha (Recursividade):** O movimento da Rainha, que combina a Torre e o Bispo, é elegantemente demonstrado reutilizando as funções recursivas das outras duas peças.

-   **Cavalo (Laços Complexos):** O característico movimento em "L" (duas casas para cima e uma para a direita) é simulado usando um único laço `for` com condições internas (`if`) e controle de fluxo (`continue`) para descrever cada etapa do percurso.

## 🧠 Conceitos Aplicados

Este projeto serve como uma vitrine para os seguintes conceitos de programação em C:

-   **Recursividade:** Entendimento de casos base e passos recursivos para resolver um problema dividindo-o em subproblemas menores e idênticos.
-   **Laços Aninhados:** Uso de `for` dentro de `for` para percorrer estruturas bidimensionais (mesmo que imaginárias, como no caso do tabuleiro).
-   **Controle de Fluxo Avançado:** Aplicação de `continue` para pular para a próxima iteração de um laço de forma condicional.
-   **Funções e Modularização:** Organização do código em funções distintas para cada peça, promovendo a legibilidade e a reutilização.
-   **Ponteiros de Caractere (`const char*`):** Para passar strings (direções de movimento) de forma eficiente para as funções.

## 🚀 Como Executar

**Pré-requisitos:**
* Um compilador C instalado (ex: **GCC**).

**Passos:**

1.  **Clone o repositório** e navegue até a pasta do projeto `Xadrez`.
2.  **Compile o programa** usando o terminal:
    ```bash
    gcc main.c -o xadrez
    ```
3.  **Execute a demonstração:**
    - No Windows:
      ```bash
      .\xadrez.exe
      ```
    - No Linux ou macOS:
      ```bash
      ./xadrez
      ```

O terminal exibirá uma sequência de textos descrevendo o movimento de cada peça, uma após a outra.

## 👨‍💻 Autor

- **Vitor Hugo de Souza**


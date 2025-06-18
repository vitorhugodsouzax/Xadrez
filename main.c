
// Descrição: Um programa em C para demonstrar os movimentos de peças de xadrez
//            utilizando técnicas avançadas de controle de fluxo, como recursividade
//            e laços complexos, conforme especificado no desafio.


#include <stdio.h>

// --- Protótipos das Funções ---

// Funções com RECURSIVIDADE
void mover_torre_recursivo(int casas_restantes, const char* direcao);
void mover_bispo_recursivo(int casas_restantes, const char* direcao);
void mover_rainha_recursivo(int casas_restantes, const char* direcao_reta, const char* direcao_diagonal);

// Funções com LOOPS
void mover_bispo_loops(int casas);
void mover_cavalo_loops();


// --- Função Principal ---
int main(void) {
    // Requisito: Valores definidos diretamente no código.
    const int CASAS_A_MOVER = 4;

    printf("==========================================\n");
    printf("  DEMONSTRACAO DE MOVIMENTOS DE XADREZ\n");
    printf("==========================================\n\n");

    // --- 1. Torre (usando Recursividade) ---
    printf("--- Movimento da TORRE (Recursivo) ---\n");
    mover_torre_recursivo(CASAS_A_MOVER, "Cima");
    printf("\n"); // Separador

    // --- 2. Bispo (usando Recursividade) ---
    printf("--- Movimento do BISPO (Recursivo) ---\n");
    mover_bispo_recursivo(CASAS_A_MOVER, "Diagonal Superior Direita");
    printf("\n");

    // --- 3. Rainha (usando Recursividade) ---
    // A rainha se move como uma torre e um bispo, então sua função
    // pode simplesmente chamar as outras para demonstrar.
    printf("--- Movimento da RAINHA (Recursivo) ---\n");
    mover_rainha_recursivo(CASAS_A_MOVER, "Direita", "Diagonal Inferior Esquerda");
    printf("\n");

    // --- 4. Bispo (usando Loops Aninhados) ---
    printf("--- Movimento do BISPO (Loops Aninhados) ---\n");
    mover_bispo_loops(CASAS_A_MOVER);
    printf("\n");

    // --- 5. Cavalo (usando Loops Complexos) ---
    printf("--- Movimento do CAVALO (Loop Complexo) ---\n");
    mover_cavalo_loops();
    printf("\n");
    
    printf("==========================================\n");
    printf("          DEMONSTRACAO FINALIZADA\n");
    printf("==========================================\n");

    return 0;
}


// --- Implementação das Funções ---

/**
 * @brief Move a torre recursivamente em uma direção.
 * @param casas_restantes O número de casas que ainda faltam para mover.
 * @param direcao A string que representa a direção do movimento.
 */
void mover_torre_recursivo(int casas_restantes, const char* direcao) {
    // Caso Base: A condição de parada da recursão.
    if (casas_restantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento de uma casa na direção especificada.
    printf("Torre: Move para %s\n", direcao);

    // Passo Recursivo: A função chama a si mesma, mas com o problema reduzido
    mover_torre_recursivo(casas_restantes - 1, direcao);
}

/**
 * @brief Move o bispo recursivamente em uma direção diagonal.
 */
void mover_bispo_recursivo(int casas_restantes, const char* direcao) {
    // Caso Base: Condição de parada.
    if (casas_restantes <= 0) {
        return;
    }
    // Ação
    printf("Bispo: Move para %s\n", direcao);
    // Passo Recursivo
    mover_bispo_recursivo(casas_restantes - 1, direcao);
}

/**
 * @brief Move a rainha recursivamente, demonstrando um movimento reto e um diagonal.
 */
void mover_rainha_recursivo(int casas_restantes, const char* direcao_reta, const char* direcao_diagonal) {
    printf("Rainha (como Torre):\n");
    mover_torre_recursivo(casas_restantes, direcao_reta);
    printf("Rainha (como Bispo):\n");
    mover_bispo_recursivo(casas_restantes, direcao_diagonal);
}

/**
 * @brief Simula o movimento do bispo na diagonal usando loops aninhados.
 * @param casas O número de passos na diagonal a simular.
 */
void mover_bispo_loops(int casas) {
    printf("Simulando movimento na diagonal (passo a passo):\n");
    for (int i = 1; i <= casas; i++) {       // Loop externo: movimento vertical
        for (int j = 1; j <= casas; j++) {   // Loop interno: movimento horizontal
            if (i == j) {
                printf("Bispo: Anda para a casa (%d, %d) na diagonal\n", i, j);
            }
        }
    }
}


/**
 * @brief Simula o movimento do cavalo em "L" usando um loop com condições.
 * O movimento é "duas casas para cima e uma para a direita".
 */
void mover_cavalo_loops() {
    for (int passo = 1; passo <= 3; passo++) {
        if (passo <= 2) {
            printf("Cavalo: Anda uma casa para Cima (passo %d)\n", passo);
            continue;
        }
        
        printf("Cavalo: Vira e anda uma casa para Direita (passo %d)\n", passo);
    }
    printf("Cavalo: Movimento em 'L' concluido.\n");
}
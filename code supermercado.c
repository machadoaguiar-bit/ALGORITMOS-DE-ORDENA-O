#include <stdio.h>
#include <string.h>

#define TOTAL 10
#define TAM_NOME 50

// Estrutura que representa um produto do supermercado.
typedef struct {
    char nome[TAM_NOME];
    float preco;
} Produto;

// Exibe os produtos e seus respectivos preços.
void mostrarProdutos(Produto produtos[], int tamanho) {
    int i;

    printf("\n%-25s %s\n", "PRODUTO", "PRECO (R$)");
    printf("------------------------------------------\n");

    for (i = 0; i < tamanho; i++) {
        printf("%-25s R$ %8.2f\n",
               produtos[i].nome,
               produtos[i].preco);
    }
}

// Bubble Sort: compara os preços de produtos vizinhos.
// Quando estão fora de ordem, troca os registros de posição.
void bubbleSort(Produto produtos[], int tamanho) {
    int i, j;
    Produto temp;
    int trocou;

    for (i = 0; i < tamanho - 1; i++) {
        trocou = 0;

        // Os maiores preços vão para o final do vetor.
        for (j = 0; j < tamanho - i - 1; j++) {
            if (produtos[j].preco > produtos[j + 1].preco) {

                // Troca os registros completos, não apenas os preços.
                temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;

                trocou = 1;
            }
        }

        // Se não houve trocas, os preços já estão ordenados.
        if (trocou == 0) {
            break;
        }
    }
}

// Quick Sort: utiliza um pivô para dividir os preços.
// Os menores ficam à esquerda e os maiores à direita.
void quickSort(Produto produtos[], int inicio, int fim) {
    int i = inicio;
    int j = fim;

    // Escolhe o preço do elemento central como pivô.
    float pivo = produtos[(inicio + fim) / 2].preco;
    Produto temp;

    while (i <= j) {
        // Avança enquanto encontrar preços menores que o pivô.
        while (produtos[i].preco < pivo) {
            i++;
        }

        // Recua enquanto encontrar preços maiores que o pivô.
        while (produtos[j].preco > pivo) {
            j--;
        }

        // Troca os registros que estão do lado errado.
        if (i <= j) {
            temp = produtos[i];
            produtos[i] = produtos[j];
            produtos[j] = temp;

            i++;
            j--;
        }
    }

    // Ordena recursivamente a parte esquerda.
    if (inicio < j) {
        quickSort(produtos, inicio, j);
    }

    // Ordena recursivamente a parte direita.
    if (i < fim) {
        quickSort(produtos, i, fim);
    }
}

int main() {
    // Os mesmos 10 produtos serão utilizados nos dois algoritmos.
    Produto produtos[TOTAL] = {
        {"Arroz 5 kg", 29.90},
        {"Feijao 1 kg", 8.50},
        {"Leite 1 litro", 4.79},
        {"Cafe 500 g", 18.90},
        {"Acucar 1 kg", 5.49},
        {"Oleo 900 ml", 7.99},
        {"Macarrao 500 g", 4.29},
        {"Farinha 1 kg", 6.75},
        {"Biscoito", 3.89},
        {"Queijo 300 g", 15.60}
    };

    // Cria cópias para os dois métodos ordenarem
    // exatamente os mesmos dados, sem interferência.
    Produto produtosBubble[TOTAL];
    Produto produtosQuick[TOTAL];

    int i;

    // Copia o vetor original para cada algoritmo.
    for (i = 0; i < TOTAL; i++) {
        produtosBubble[i] = produtos[i];
        produtosQuick[i] = produtos[i];
    }

    printf("==========================================\n");
    printf("   PRECOS DOS PRODUTOS DO SUPERMERCADO\n");
    printf("==========================================\n");

    // Apresenta os registros antes da ordenação.
    printf("\n--- DADOS ANTES DA ORDENACAO ---\n");
    mostrarProdutos(produtos, TOTAL);

    // Ordena uma cópia usando Bubble Sort.
    bubbleSort(produtosBubble, TOTAL);

    printf("\n--- DADOS ORDENADOS COM BUBBLE SORT ---\n");
    mostrarProdutos(produtosBubble, TOTAL);

    // Ordena outra cópia usando Quick Sort.
    quickSort(produtosQuick, 0, TOTAL - 1);

    printf("\n--- DADOS ORDENADOS COM QUICK SORT ---\n");
    mostrarProdutos(produtosQuick, TOTAL);

    return 0;
}

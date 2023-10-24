#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar informações de arquivo
struct FileInfo {
    const char *nomeArquivo;
    int quantidadeDados;
    int numIteracoes;
};

// Função Merge Sort
void merge(int *array, int inicio, int meio, int fim, int *numComparacoes, int *numTrocas) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = array[inicio + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = array[meio + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while (i < n1 && j < n2) {
        (*numComparacoes)++;  // Incrementa o contador de comparações
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
            (*numTrocas)++;  // Incrementa o contador de trocas
        }
        k++;
    }

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

int mergeSort(int *array, int inicio, int fim, int *numComparacoes, int *numTrocas) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(array, inicio, meio, numComparacoes, numTrocas);
        mergeSort(array, meio + 1, fim, numComparacoes, numTrocas);
        merge(array, inicio, meio, fim, numComparacoes, numTrocas);
    }
    return *numComparacoes + *numTrocas;
}

// Função para ordenar um arquivo com Bubble Sort e obter o número de iterações
int bubbleSort(int *array, int tamanho) {
    int numComparacoes = 0;
    int numTrocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            numComparacoes++;
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                numTrocas++;
            }
        }
    }

    return numComparacoes + numTrocas;
}

// Função para ordenar um arquivo com Insertion Sort e obter o número de iterações
int insertionSort(int *array, int tamanho) {
    int numComparacoes = 0;
    int numTrocas = 0;

    for (int i = 1; i < tamanho; i++) {
        int chave = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > chave) {
            numComparacoes++;
            array[j + 1] = array[j];
            j--;
            numTrocas++;
        }

        array[j + 1] = chave;
    }

    return numComparacoes + numTrocas;
}

int main() {
    
    const char *nomesArquivos[] = {"1.txt", "2.txt","3.txt", "4.txt", "5.txt", "6.txt","7.txt", "8.txt","100.txt" ,"200.txt" ,"500.txt" ,"1000.txt" , "2500.txt", "5000.txt", "7500.txt", "10000.txt", "50000.txt"};
    int numArquivos = sizeof(nomesArquivos) / sizeof(nomesArquivos[0]);

    struct FileInfo *informacoesArquivos = malloc(numArquivos * sizeof(struct FileInfo));
    if (informacoesArquivos == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    int escolha;
    
    while (1) {
        printf("Escolha o algoritmo de ordenacao:\n1. Bubble Sort\n2. Insertion Sort\n3. Merge Sort\n4. Sair\n");
        scanf("%d", &escolha);

        if (escolha == 4) {
            break;
        }

        for (int i = 0; i < numArquivos; i++) {
            const char *nomeArquivo = nomesArquivos[i];
            FILE *arquivo = fopen(nomeArquivo, "r");

            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo %s.\n", nomeArquivo);
                continue;
            }

            int tamanho = 0;
            int numero;
            while (fscanf(arquivo, "%d", &numero) == 1) {
                tamanho++;
            }

            rewind(arquivo);
            int *array = malloc(tamanho * sizeof(int));

            for (int j = 0; j < tamanho; j++) {
                fscanf(arquivo, "%d", &array[j]);
            }

            fclose(arquivo);

        
            int numIteracoes;
            int numComparacoes = 0;  // Variável para contar o número de comparações
            int numTrocas = 0;  // Variável para contar o número de trocas

            switch (escolha) {
                case 1:
                    numIteracoes = bubbleSort(array, tamanho);
                    break;
                case 2:
                    numIteracoes = insertionSort(array, tamanho);
                    break;
                case 3:
                    numIteracoes = mergeSort(array, 0, tamanho - 1, &numComparacoes, &numTrocas);             
                    break;
            }

            informacoesArquivos[i].nomeArquivo = nomeArquivo;
            informacoesArquivos[i].quantidadeDados = tamanho;
            informacoesArquivos[i].numIteracoes = numIteracoes;

            free(array);
        }

        for (int i = 0; i < numArquivos; i++) {
            printf("Arquivo: %s, Dados: %d, Iteracoes: %d\n",
                   informacoesArquivos[i].nomeArquivo,
                   informacoesArquivos[i].quantidadeDados,
                   informacoesArquivos[i].numIteracoes);
        }
    }

    free(informacoesArquivos);

    return 0;
}



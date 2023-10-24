#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>   

// Função para imprimir um array de inteiros
void imprimirArray(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Função Bubble Sort
void bubbleSort(int *array, int tamanho) {
    int i, j;
    int numTrocas = 0;  // Variável para contar o número de trocas
    int numComparacoes = 0;  // Variável para contar o número de comparações

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            numComparacoes++;  // Incrementa o contador de comparações
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                numTrocas++;  // Incrementa o contador de trocas
            }
        }
    }

    printf("Lista ordenado com Bubble Sort:\n");
    imprimirArray(array, tamanho);
    printf("Número de iterações no Bubble Sort: %d\n\n", numComparacoes + numTrocas);
}

// Função Insertion Sort
void insertionSort(int *array, int tamanho) {
    int i, chave, j;
    int numTrocas = 0;  // Variável para contar o número de trocas
    int numComparacoes = 0;  // Variável para contar o número de comparações

    for (i = 1; i < tamanho; i++) {
        chave = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > chave) {
            numComparacoes++;  // Incrementa o contador de comparações
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = chave;
        numTrocas++;  // Incrementa o contador de trocas
    }

    printf("Lista ordenada com Insertion Sort:\n");
    imprimirArray(array, tamanho);
    printf("\nNúmero de iterações no Insertion Sort: %d\n\n", numComparacoes + numTrocas);
}

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

void mergeSort(int *array, int inicio, int fim, int *numComparacoes, int *numTrocas) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(array, inicio, meio, numComparacoes, numTrocas);
        mergeSort(array, meio + 1, fim, numComparacoes, numTrocas);
        merge(array, inicio, meio, fim, numComparacoes, numTrocas);
    }
}

int arq_ordenado(const char *nomeArquivo, int *array, int tamanho) {
    FILE *arquivoOrdenado = fopen(nomeArquivo, "w");
    if (arquivoOrdenado == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 0;  // Retorna 0 em caso de erro
    }

    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivoOrdenado, "%d ", array[i]);
    }

    fclose(arquivoOrdenado);

    return 1;  // Retorna 1 em caso de sucesso
}

int main() {

    int sair = 0;
    int continuar = 0;
    int opt = 0;
    int numComparacoes = 0;  // Variável para contar o número de comparações
    int numTrocas = 0;  // Variável para contar o número de trocas

    FILE *arquivo = fopen("nomeArquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int tamanho = 0;
    int numero;
    while (fscanf(arquivo, "%d", &numero) == 1) {
        tamanho++;
    }
    rewind(arquivo);  // Volta para o início do arquivo

    int array[tamanho];
    for (int i = 0; i < tamanho; i++) {
        fscanf(arquivo, "%d", &array[i]);
    }

    fclose(arquivo);
    
    //printf("\nLista original tem tamanho de: %d \n", tamanho);
    
    printf("Lista original:\n ");
    imprimirArray(array, tamanho);
    printf("\n\nLista original tem tamanho de: %d \n\n", tamanho);


    //Verificação para looping até o usuário terminar suas consultas.
    while (true){
        //Sair do loop e fechar programa.
        if(sair == 1){
            printf("--------------------------------------------------------------------------------------------------\n");
            printf("|                                                                                                |\n");
            printf("|                                                                                                |\n");
            printf("|                          Obrigado por utilizar nosso ordenador.                                |\n");
            printf("|                                                                                                |\n");
            printf("--------------------------------------------------------------------------------------------------\n");
            

            break;
        }
        //Oferece as opções de ordenação.
        else if (continuar == 0){
            printf("--------------------------------------------------------------------------------------------------\n");
            printf("|                                                                                                |\n");
            printf("|                                                                                                |\n");
            printf("|                                                                                                |\n");
            printf("|                        Qual ordenacao voce gostaria de utilizar?                               |\n|                        1)InsertionSort   2)BubbleSort   3)MergeSort   4)Sair                   |\n");
            printf("|                                                                                                |\n");
            printf("|                                                                                                |\n");
            printf("|                                                                                                |\n");
            printf("--------------------------------------------------------------------------------------------------\n");
            scanf("%d", &opt);

        }
    

        switch (opt){
            case 1:
                
                insertionSort(array, tamanho);
                
                break;
                
            case 2:
            
                bubbleSort(array, tamanho);
                
                break;
                

            case 3:
                mergeSort(array, 0, tamanho - 1, &numComparacoes, &numTrocas);
                printf("Numeros ordenados com Merge Sort:\n");
                imprimirArray(array, tamanho);
                printf("Número de iterações no Merge Sort: %d\n\n", numComparacoes + numTrocas);
                numComparacoes = 0;
                numTrocas = 0;
                
                break;
               
            case 4:
                sair = 1;
                break;
                            
        }
    
    }
    arq_ordenado("dados_ordenados.txt", array, tamanho);
    free(array); 
    return 0;
}


 



#include <stdio.h>
#include <stdlib.h>


void alocacaovetorponteiro(){
    int *vetor, num;

    scanf("%d", &num);

    vetor = ((int *) malloc(sizeof(int) * num));

    for (int i = 0; i < num; i++){
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < num; i++){
        printf("%d", vetor[i]);
    }

    free(vetor);
}

void alocacaomatrizponteiro(){
    int numA, numB;

    scanf("%d %d", &numA, &numB);


    int **matriz = (int **) malloc(numA * sizeof(int));


    for (int i = 0; i < numA; i++){
        matriz[i] = (int **) malloc(numB * sizeof(int));
    }

    for (int i = 0; i < numA; i++){
            for (int j = 0; j < numB; j++){
                scanf("%d", &matriz[i][j]);
            }
    }

    for (int i = 0; i < numA; i++){
        for (int j = 0; j < numB; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < numA; i++){
        free(matriz[i]);
    }
    free(matriz);

}

int main()
{
    alocacaovetorponteiro();
    alocacaomatrizponteiro();
    return 0;
}



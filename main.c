#include <stdio.h>
#include <stdlib.h>

int main()
{
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

    return 0;
}

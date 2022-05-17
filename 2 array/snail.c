#include <stdio.h> // матрица улитка

int main()
{
    int size, n = 0, i, j;
    int start = 0, end = 0;

    printf("Size of snail = ");
    scanf("%d", &size);

    int snail[size][size];
    int s = size; 

    while (s > 0) {
        for (i = start, j = start; j < s; j++) snail[i][j] = ++n;
        for (i = start + 1, j = s - 1; i < s; i++) snail[i][j] = ++n; 
        for (i = s - 1, j = s - 2; j >= end; j--) snail[i][j] = ++n;
        for (i = s - 2, j = start; i > end; i--) snail[i][j] = ++n;
        s--;
        start++;
        end++;
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", snail[i][j]);
        }
        printf("\n");
    }

    return 0;
}


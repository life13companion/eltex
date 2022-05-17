#include <stdio.h> // матрица, заполняющая верхний треугольник 1, а нижний 0

int main()
{
    int size;

    printf("Size of array = ");
    scanf("%d", &size);

    int array[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
                if ((i + j) < size) {
                    array[i][j] = 1;    
                }
                else array[i][j] = 0;

            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
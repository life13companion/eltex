#include <stdio.h> // вывести квадратную матрицу 

int main() 
{
    int size, n = 0;

    printf("Size of array: size = ");
    scanf("%d", &size);

    int array[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = n + 1;
            printf("%d\t", array[i][j]);
            n++;
        }
        printf("\n");
    }
    return 0;
}

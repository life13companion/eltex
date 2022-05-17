#include <stdio.h> // вывести массив в обратном порядке

int main() 
{
    int size;

    printf("Size or array = ");
    scanf("%d", &size);

    int array[size];
    
    for (int i = 0; i < size; i++) {
        array[i] = size - i;
        printf("%d ", array[i]);
    } 
    
    printf("\n");
    return 0;
}

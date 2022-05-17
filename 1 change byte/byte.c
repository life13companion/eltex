#include <stdio.h>

int main() 
{
    int a = 0x44332211, sum;
    unsigned char third;
    
    third = (a >> 16 & 0xFF);

    printf("a = %x\n", a);
    printf("the third byte of a = %x\n", third);
    printf("change for: ");
    scanf("%x", &sum);

    a = (a & 0xFF00FFFF) + (sum << 16);
    printf("a = %x\n", a);

    return 0;
}
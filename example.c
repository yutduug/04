#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned int x;
    int b;
    
    printf("input a number : ");
    scanf("%ui", &x);
    
    // 반복문을 통해 각 비트를 확인하며 1의 개수를 셈
    for (b = 0; x != 0; x >>= 1) 
    {
        if (x & 1) 
        {
            b++;
        }
    }
    
    printf("The result is : %i\n", b);
    
    return 0;
}
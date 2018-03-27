#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("Minutes: ");
    int n = get_int();
    
    int b = 12*n;
    
    printf("Bottles: %i\n", b);
}
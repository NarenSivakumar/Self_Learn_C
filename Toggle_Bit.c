// Toggle the specific bit
#include<stdio.h>

int toggle(int n, int pos)
{
    // We can use the bitwise XOR operator (^) to toggle a bit
    return n ^ (1 <<pos);
}

int main()
{
    int num, position;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the position: ");
    scanf("%d", &position);

    printf("After toggling the bit at the %d position %d\n",position, toggle(num,position)); 
    return 0;
}
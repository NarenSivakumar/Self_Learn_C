// Multiply and Divide the number by 2 with using * or / operators
#include<stdio.h>

int Multiply(int n)
{
    return n << 1 ; //Using left operator WITH 1 we can do multiply by 2
}

int Divide(int n)
{
    return n >> 1 ; //Using right operator WITH 1 we can do divide by 2
}

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf(" Multiply : %d and Divide :%d\n ", Multiply(num), Divide(num));
    
    }
#include<stdio.h>
void floatbinary(float);

int main()
{
        float n;
        printf("Enter the number\n");
        scanf("%f",&n);

        printf("Float binary representation:\n");
        floatbinary(n);
}

void floatbinary(float n)
{
        int i,j;

         char *p = (char *)&n;
         for(i = 3; i >=0; i--){ //this iterate for float 4 bytes
                 for(j = 7;j>=0;j--) //this iteration for each bits in all bytes
                 {
                         printf("%d",(p[i]>>j)&1);//this expression shifts the bit with help
                                                  //AND Operator lowest significant bit like
                                                  //EXTRACTION of bits
                 }
         }
         printf("\n");
}

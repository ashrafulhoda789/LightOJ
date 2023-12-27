#include<stdio.h>
int main()
{
    int t,n,i,lastNumber,firstNumber;
    scanf("%d",&t);
    
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        lastNumber = n%10;
        firstNumber = n/10000;
        
        int summation = firstNumber + lastNumber;
        printf("Sum = %d\n",summation);
    }
}
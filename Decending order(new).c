#include<stdio.h>
int main()
{
    int i,count=0;
    
    for(i=1000; i>=1; i--)
    {
        count++;
        printf("%d ",i);
        if(count==5)
        {
            printf("\n");
            count=0;
        }
        
       
    }
}
#include<stdio.h>
int main()
{
    int t,num,i,j,count=0;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d",&num);

        for(j=2; j<num; j++)
        {
            if(num%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d is a prime\n",num);
        }
        else
        {
            printf("%d is not a prime\n",num);
        }

    }
}

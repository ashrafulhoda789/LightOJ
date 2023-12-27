#include<stdio.h>
int main()
{
    int t,n,row,col,i;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
                    printf("*");
            }
            printf("\n");
        }
        if(t!=i)
        {
            printf("\n");
        }
    }
}

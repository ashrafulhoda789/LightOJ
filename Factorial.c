#include<stdio.h>
int main()
{
    int n,t,j;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        long long int fact=1;
        for(j=1; j<=n; j++)
        {
            fact = fact*j;
        }
        printf("%lld\n",fact);
    }
}
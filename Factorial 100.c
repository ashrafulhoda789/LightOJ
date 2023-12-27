#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int count=0;
        for(int i=5; i<=n; i *=5)
        {
            count = count + n/i;
        }
        printf("%d\n",count);
    }
}
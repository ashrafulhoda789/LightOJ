#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,result;
    scanf("%d",&t);
    
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        
        result = sqrt(n);
        if(result*result==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100005];
    int t,i;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(string);
        int count=1;
        int len = strlen(string);
        for(i=0; i<len; i++)
        {
            if(string[i]==' ' && string[i+1]!=' ')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
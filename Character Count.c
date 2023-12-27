#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char string[1000];
        int i,count[26];
        gets(string);

        for(i=0; i<=25; i++)
        {
            count[i]=0;
        }

        int len = strlen(string);
        for(i=0; i<=len; i++)
        {
            if(string[i]>='a' && string[i]<='z')
            {
                count[string[i]-'a']++;
            }
        }
        for(i=0; i<=25; i++)
        {
            if(count[i]!=0)
            {
                printf("%c = %d\n",'a'+i,count[i]);
            }
        }
        if(t>0)
        {
            printf("\n");
        }
    }
}
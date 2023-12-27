#include<stdio.h>
#include<string.h>
void reverseString(char string[]);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str1[1001];
        char str[1001];
        scanf(" %[^\n]", str);

        int j=0;
        int len = strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]!=' ')
            {
                str1[j] = str[i];
                j++;
            }
            else if(j>0)
            {
                str1[j] = '\0';
                reverseString(str1);
                j=0;
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        if(j>0)
        {
            str1[j] = '\0';
            reverseString(str1);
        }
        printf("\n");
        
    }
}
void reverseString(char string[])
{
    int k;
    int len = strlen(string);
    for(k=len-1; k>=0; k--)
    {
        printf("%c", string[k]);
    }
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, t, temp;
    char string[100];
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%s", string);
        int len = strlen(string);
        for(j=0; j<len; j++)
            {
                temp = string[j] - '0';
            }
        if(temp%2==0)
            {
                printf("even\n");
            }
        else
            {
                printf("odd\n");
            }
        }

}
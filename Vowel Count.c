#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[1001];
        scanf(" %[^\n]", str);
        int len = strlen(str);
        int count=0;
        for(int i=0; i<len; i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
    }
    
}
#include<stdio.h>
int main()
{
    int arr[3];
    int t,i,temp;
    scanf("%d",&t);

    for(int k=1; k<=t; k++){
        for(int i=0; i<3; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=0; i<3; i++)
        {
            for(int j=i+1; j<3; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        } 
        printf("Case %d: ",k);
        for(i=0; i<3; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
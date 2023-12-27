#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    for(i=0; i<t; i++){
        char string[100];
        cin >> string;
        int temp,j;
        int len = strlen(string);
        for(j=0; j<len; j++)
        {
            temp = string[j] - '0';
        }
        if(temp%2==0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    } 
}
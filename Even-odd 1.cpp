#include<iostream>
using namespace std;
int main()
{
    int number,t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> number;
        if(number%2==0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}
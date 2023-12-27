#include <iostream>
using namespace std;
int main() 
{
    int sum, diff;
    cin >> sum >> diff;

    double A = (sum + diff) / 2.0;
    double B = sum - A;

    cout << A << " " << B <<endl;

    return 0;
}

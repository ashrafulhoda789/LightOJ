/*
#include<iostream>
#include<iomanip>

int main() {
    int t;
    std::cin >> t;

    while(t--) {
        int arr[3];
        double req, curr;

        for(int i=0; i<3; i++) {
            std::cin >> arr[i];
        }

        if(arr[1] < arr[0]) {
            req = (((arr[0] + 1) - arr[1]) / static_cast<double>(arr[2])) * 6;
        } else {
            req = 0; 
        }

        curr = arr[1] / ((300 - arr[2]) / 6);
        
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << curr << " " << req << std::endl;
    }

    return 0;
}

#include<iostream>
#include<iomanip>

int main(){

    int t;
    double req, curr;
    std::cin >> t;

    std::cout << std::setprecision(2) << std::fixed; 

    while(t--){
        int a, b, c;
        std::cin >> a >> b >> c;
        
        curr = (double)(b*6) / (300-c);
        
        if(a - b < 0){
            continue;
        }

        req = (double) (((a+1)-b)*6)/c;
        std::cout << curr << " " << req << std::endl;
    }
}
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;

    for(i = 1; i <= n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << fixed;
        cout.precision(2);
        cout << (double)(b * 6) / (300 - c) << " ";

        if(a - b < 0)
        {
            cout << 0.0 << endl;
            continue;
        }

        
        cout << (double)(((a+1) - b) * 6) / c << endl;
    }

}


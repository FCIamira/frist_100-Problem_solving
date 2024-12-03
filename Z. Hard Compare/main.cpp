#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long num1,num2,snum1,snum2;
    cin >> num1 >>snum1 >> num2 >> snum2 ;
    double log1 = snum1 * log(num1);
    double log2 = snum2 * log(num2);
    if(log1 > log2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

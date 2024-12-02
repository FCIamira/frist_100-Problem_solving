#include <iostream>

using namespace std;

int main()
{
    long long  A,B,LastNum1,LastNum2;
    cin>>A>>B;
    LastNum1 = A % 10;
    LastNum2 = B % 10;
    cout << LastNum1+LastNum2;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double num;
    cin>>num;
    if(fmod(num,1)!=0)
    {
        double mod = num - static_cast<int>(num);
        cout<<"float "<<(int)num<<" "<< mod;
    }
    else
    {
        cout<<"int "<<(int)num;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    string str = to_string(x);
    int first_digit = str[0] ;
    if(first_digit % 2 ==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}

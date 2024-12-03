#include <iostream>

using namespace std;

int main()
{
    double num1,num2,result;
    char S;
    char Q='=';
    cin>>num1>>S>>num2>>Q>>result;
    switch(S)
    {
    case '+':
        if(num1+num2==result)
        {
            cout<<"Yes";

        }
        else
        {
            cout<<num1+num2;

        }
        break;
    case '-':
        if(num1-num2==result)
        {
            cout<<"Yes";

        }
        else
        {
            cout<<num1-num2;
        }
        break;
    case '*':
        if(num1*num2==result)
        {
            cout<<"Yes";

        }
        else
        {
            cout<<num1*num2;
        }
        break;

    }



    return 0;
}

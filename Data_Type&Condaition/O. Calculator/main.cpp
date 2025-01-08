#include <iostream>

using namespace std;

int main()
{
    char op;
    double  num1,num2;
    cin>>num1>>op>>num2;
    switch(op)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    }
    return 0;
}

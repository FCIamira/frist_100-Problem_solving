#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char x;
    cin>>x;
    if(isalpha(x)){
    if(islower(x))
    {
         cout <<char(toupper(x))<< endl;
    }
    else if(isupper(x))
    {
    cout <<char(tolower(x))<< endl;
    }
    }

    return 0;
}

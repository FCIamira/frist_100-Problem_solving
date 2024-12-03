#include <iostream>

using namespace std;

int main()
{
    int x,years,months,days;
    cin>>x;

    years = (x/365);
    months = ((x%365)/ 30);
    days = ((x%365)% 30);
    cout << years <<" years"<<"\n" <<months<<" months"<<"\n"<<days<<" days"<< endl;
    return 0;
}

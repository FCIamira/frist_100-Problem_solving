#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin>>n;
    if(n<2){
        cout<<"NO";
    }
    bool isprime =true;
    ////==> Check from 2 to n-1
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            {
               isprime=false;

            };
    }
     if (isprime) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    return 0;
}

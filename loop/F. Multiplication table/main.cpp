#include <iostream>

using namespace std;
int main() {

    long long x,n,F=1;
    cin>>x;
    long long arr[x];
    for (int i = 0; i < x; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i < x; i++) {
            long long n=arr[i];
     long long F = 1;//for each one updata F=1
         for (int i = 1; i <= n; i++) {
        F *= i;
    }
cout << F << "\n";
    }

    return 0;
}

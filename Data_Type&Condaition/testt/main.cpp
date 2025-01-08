#include <iostream>
using namespace std;

int main() {
    long long L, R,sum = 0;
    cin >> L >> R;

    if (L > R) {
        swap(L, R);
    }

    for (int num = L; num <= R; ++num) {
        if (num % 2 != 0) {
            sum += num;
        }
    }

    cout<< sum ;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int L, R, sum = 0;
    cin >> L >> R;

    if (L < -100000)
    {
        L = -100000;
    }
    if (R > 100000)
    {
        R = 100000;
    }

    if (L % 2 == 0) {
        L++;
    }

    for (int i = L; i <= R; i += 2) {
        sum += i;
    }

    cout << sum;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;
    if (B == 0) {
       return 1;
    }

    double X =static_cast<double> (A) / B;

    cout << "floor " << A << " / " << B << " = " << floor(X) << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceil(X) << "\n";
    cout << "round " << A << " / " << B << " = " << round(X) << "\n";

    return 0;
}

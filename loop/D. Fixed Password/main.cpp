#include <iostream>

using namespace std;

int main()
{
    int x;
    while (cin >> x) {
        if (x == 1999) {
            cout<<"Correct\n";
            return 0;
        } else {
            cout<<"Wrong\n";
        }
    }
    return 0;
}

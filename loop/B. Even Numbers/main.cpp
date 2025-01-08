#include <iostream>

using namespace std;

int main()
{
    int N;
    bool hasEven = false;
    cin>>N;
    if(N<=0){
        return 0;
    }
    for (int i = 1; i <= N; i++)
    {
            if(i%2==0){
                cout<<i<<"\n";

                hasEven = true;
            }
        }


        if (!hasEven)
    {
        cout << -1;
    }
    return 0;
}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    bool hasEven = false;
//
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            cout << i << endl;
//            hasEven = true;
//        }
//    }
//
//    if (!hasEven)
//    {
//        cout << -1 << endl;
//    }
//
//    return 0;
//}

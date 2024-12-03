#include <iostream>
#include <algorithm>

using namespace std;

//int main()
//{
//    long long a,b,c;
//    cin >>a>>b>>c;
//    int arr[3]={a,b,c};
//   for (int i = 0; i < 2; i++) {
//        for (int j = i + 1; j < 3; j++) {
//            if (arr[i] > arr[j]) {
//                swap(arr[i], arr[j]);
//            }
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        cout << arr[i] << "\n";
//    }
//
//cout << "\n";
//       for (int i = 0; i < 2; i++) {
//        for (int j = i + 1; j < 3; j++) {
//            if (arr[i] < arr[j]) {
//                swap(arr[i], arr[j]);
//            }
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        cout << arr[i] << "\n";
//    }
//    return 0;
//}


#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int A, B, C;
    cin >> A >> B >> C;
    int original[3] = {A, B, C};
    int sorted[3] = {A, B, C};
    sort(sorted, sorted + 3);
    for (int i = 0; i < 3; i++) {
        cout << sorted[i] << endl;
    }
cout<<"\n";
    for (int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }

    return 0;
}


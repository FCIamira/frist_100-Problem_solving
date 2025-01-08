#include <iostream>

using namespace std;

int main()
{
    int n,even=0,odd=0,p=0,Neg=0;
//    bool hasEven = false;
//    bool hasPositive =false;
    cin >>n;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
//            hasEven=true;
        }
        if(arr[i]%2!=0){
            odd++;
//             cout<<"\ntest: \n"<<arr[i];
        }
        if(arr[i]>0){
            p++;
//            hasPositive=true;
        }
        if(arr[i]<0)
        {
            Neg++;
        }
    }
    cout<<"Even: "<<even;
    cout<<"\nOdd: "<<odd;
    cout<<"\nPositive: "<<p++;
    cout<<"\nNegative: "<<Neg;
    return 0;
}

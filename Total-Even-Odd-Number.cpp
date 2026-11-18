#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<(i+1)<<" element of array: ";
        cin>>arr[i];
    }
    int Even=0,Odd=0;
    for(int i=0;i<n;i++){
        if((arr[i])%2==0){
            Even++;
        }else{
            Odd++;
        }
    }cout<<"The total number of Even and Odd values are "<<Even<<' '<<Odd;

    return 0;
}
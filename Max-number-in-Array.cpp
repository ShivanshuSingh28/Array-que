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
    int max=arr[0],maxIndex=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }cout<<"The maximum number and its Index is "<<max<<" "<<maxIndex;

    return 0;
}
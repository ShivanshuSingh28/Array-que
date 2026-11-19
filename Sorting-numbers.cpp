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
    for(int i=0;i<n;i++){
        if((arr[i+1])<arr[i]){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }cout<<arr[i]<<" ";
    }
    return 0;
}
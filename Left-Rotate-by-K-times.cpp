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
    int k;
    cout<<"How many elements u want to rotate in left: ";
    cin>>k;
    for(int j=1;j<=k;j++){
        int temp=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }arr[n-1]=temp;
    }  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        return 0;
}
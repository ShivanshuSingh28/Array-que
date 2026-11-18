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
    int max=arr[0],SecLarge=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            SecLarge=max;
            max=arr[i];
        }else if(arr[i]>SecLarge){
            SecLarge=arr[i];
        }
    }cout<<"The Second Largest number is "<<SecLarge;

    return 0;
}
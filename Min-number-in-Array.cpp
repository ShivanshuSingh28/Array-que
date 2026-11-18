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
    int min=arr[0],minIndex=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minIndex=i;
        }
    }cout<<"The minimum number and its Index is "<<min<<" "<<minIndex;

    return 0;
}
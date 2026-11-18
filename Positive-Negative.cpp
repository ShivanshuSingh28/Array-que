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
    int Positive=0,Negative=0;
    for(int i=0;i<n;i++){
        if((arr[i])>0){
            Positive++;
        }else if(arr[i]<0){
            Negative++;
        }
    }cout<<"The total number of Positive and Negative values are "<<Positive<<' '<<Negative;

    return 0;
}
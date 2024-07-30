#include<bits/stdc++.h>
using namespace std;
// CPP Code to implement bubble sort
void bubble_sort(vector<int>&arr, int n){
    for(int i=n-1;i>=0;i--){
        int didSwap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];// swap 2 numbers without using 3rd variable
            }
        }
        if(didSwap==0) break;
    }
}
int main(){
    int n;
    cout<<"Enter the total number of elements in the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the  elements in the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    bubble_sort(arr, n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    
}
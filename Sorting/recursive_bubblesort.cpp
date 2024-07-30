#include<bits/stdc++.h>
using namespace std;
// CPP Code to implement bubble sort
void recursive_bubble_sort(vector<int>&arr, int n){
    if(n==1) return;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    recursive_bubble_sort(arr, n-1);
    
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
    recursive_bubble_sort(arr, n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    
}
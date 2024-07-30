#include<bits/stdc++.h>
using namespace std;
//CPP Code to implement insertion sort
void recursive_insertion_sort(vector<int>&arr,int i, int n){
    if(i==n) return ;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }
    recursive_insertion_sort(arr, i+1,n);
}
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    recursive_insertion_sort(arr,0, n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
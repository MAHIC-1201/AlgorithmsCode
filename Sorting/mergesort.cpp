#include<bits/stdc++.h>
using namespace std;
// CPP Code to implement merge sort algorithm
void merge(vector<int>&arr, int low, int mid, int high){
    vector<int>temporary;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temporary.push_back(arr[left]);
            left++;
        }
        else{
            temporary.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temporary.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temporary.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temporary[i-low];
    }

}
void mergesort(vector<int>&arr, int low, int high){

    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);

}

int main(){
    int n;
    cout<< "Enter the size of the array: "<<endl;
    cin>>n;
    cout<< "Enter the elements of the array: "<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

    }
    cout<<""<<endl;
    mergesort(arr,0,n-1);
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

    }





}
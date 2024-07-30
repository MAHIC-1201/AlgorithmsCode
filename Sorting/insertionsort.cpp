#include<bits/stdc++.h>
using namespace std;
//CPP Code to implement insertion sort
void insertion_sort(vector<int>&arr, int n){
    for(int i=0;i<n;i++){// progressively keep increasing the size of the array
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){// for the array from 0 to j, check if its sorted,, if at any time a[j]<a[j-1] keep moving it to the left, until you find its correct place
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
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
    insertion_sort(arr, n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
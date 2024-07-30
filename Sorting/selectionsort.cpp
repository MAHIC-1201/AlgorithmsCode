#include<bits/stdc++.h>
using namespace std;
//CPP program to perform selection sort
void selection_sort(vector<int>&arr, int n){
    int i=0,j;
    while(i<n)
    {
        int mini=arr[i];// this can be either INT_MAX or the consider the beginiing element as minimum
        j=i;// consider the minimum element at the beginning
        for(int k=i+1;k<n;k++){
            if(arr[k]<mini)
            {
                j=k;
                mini=arr[k];
            }
        }// select the minimum element in the array
        swap(arr[i], arr[j]);//place the minimum element at the beginning of the array
        i++;// update the beginning of the array, and in the next iteration, find minimum in the remaining array.
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements  of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"UnSorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    selection_sort(arr, n);
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}
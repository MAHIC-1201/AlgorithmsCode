#include<bits/stdc++.h>
using namespace std;
// CPP Code for the quicksort algorithm considering first element as the pivot
int partition(vector<int>& arr, int low, int high ){
    int pivot=arr[low];
    int i=low, j=high;
    while(i<j){
        while(i<=high && arr[i]<=pivot){// find the first element on the left which is greater than picvot
            i++;
        }
        while(j>=low && arr[j]>pivot){//find the index of the first lement which is less than pivot
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);//once j <i , all elements on right of j are greater than pivot, and all elements on the left are less than pivot
    return j;
}
void quicksort(vector<int>& arr, int low, int high){
    if(low<high)
    {
        int p=partition(arr, low, high);
        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    quicksort(arr, 0, n-1);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;


}
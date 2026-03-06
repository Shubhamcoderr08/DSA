#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int st,int end){

    int idx = st - 1;
    int pivot = arr[end];

    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }

    idx++;
    swap(arr[idx], arr[end]);

    return idx;
}

void quicksort(vector<int> &arr,int st,int end){
    if(st < end){

        int pivIdx = partition(arr,st,end);

        quicksort(arr,st,pivIdx-1); // left half
        quicksort(arr,pivIdx+1,end); // right half
    }
}

int main(){

    vector<int> arr = {5,3,2,1,9,4};

    quicksort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
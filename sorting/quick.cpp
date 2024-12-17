#include<iostream>
using namespace std;

void qs(int *arr,int fe,int le){
    if (fe >= le){
        return;
    }
    int pivot = fe;
    int i = fe;
    int j = le;
    while(i<j){
        while(arr[i]<= arr[pivot] && i<=le-1){
            i++;
        }
        while(arr[j]>arr[pivot] && j>=fe+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    pivot = j;
    swap(arr[j],arr[fe]);
    qs(arr,fe,pivot-1);
    qs(arr,pivot+1, le);

}

int main(){
    int sza;
    cout<<"Enter the size of array: ";
    cin>>sza;
    cout<<endl;
    int arr[sza];
    for(int i=0;i<sza;i++){
        cin>>arr[i];
    }
    qs(arr,0,sza-1);

    for(auto elems : arr){
        cout<<elems<<" ";
    }
}


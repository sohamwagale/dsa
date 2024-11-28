#include<iostream>
using namespace std;
//O(n^2) for worst and avg
//O(n) for best
int main(){
    int sza;
    cout<<"Enter the size of array: ";
    cin>>sza;
    cout<<endl;
    int arr[sza];
    for(int i=0;i<sza;i++){
        cin>>arr[i];
    }
    for(int i=0;i<sza;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    cout<<"\n\nSorted array: \n\t";

    for(auto elems : arr){
        cout<<elems<<" ";
    }

}
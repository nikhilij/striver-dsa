// wap to insertion sorting algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many elements: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //now applying the selection sorting method

    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
// wap for selection sorting method

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cout<<"Enter how many numbers : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // now applying the selection sorting method

    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
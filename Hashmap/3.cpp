#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter how many numbers: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //map store everything in the sorted array

    //lets iterate over the map
    for(auto it:mpp){
        cout<<it.first <<"->"<<it.second<<endl;
    }

    int q;
    cout<<"Enter how many numbers you want to check for : ";
    cin>>q;
    cout<<"Enter the numbers then : ";
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    return 0;
}

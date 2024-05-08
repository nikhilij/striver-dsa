// wap to check number repeatation 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    // this will take the array as the input
    cout<<"Enter the number of elements :" ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute

    int hash[13]={0};
    // here the elements it self act as the indices for the hashmap

    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    // the code below will take the input for the numbers to check 
    cout<<"Enter the numbers to check "<<endl;

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"repeatation of" <<number <<" : "<< hash[number]<<endl;
    }

}

//max array size that you can declare in the c++ program is likely about 10^6 inside main if this exceed it will throw segementation error, but if this is declared globally then this will go up to 10^8


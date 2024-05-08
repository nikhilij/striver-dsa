// write a program to print the numbers linearly from 1 to N

#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    func(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<endl;
    func(1,n);
}
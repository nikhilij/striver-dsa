// write a program to print the numbers from n to 1
#include<bits/stdc++.h>
using namespace std;

void func(int n){
   
    if(n==0){
        return;
    }
    cout<<n<<endl;
    func(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    func(n);
    return 0;
}
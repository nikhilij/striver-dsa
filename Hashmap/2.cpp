// in this program i will learn about character hashing 1.cpp contains number hashing
// basically i have used array in these 1.cpp and 2.cpp but not used the stl of cpp

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;


    //precompute
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"Enter how many characters: ";
    cin>>q;
    cout<<"Enter the characters to check for : ";
    while(q--){
        char c;
        cin >> c;
        cout <<"no. of times " <<c<<"repeated :"<<hash[c-'a']<<endl;
    }


    return 0;
}
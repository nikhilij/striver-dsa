//programs to write the program to print the name five times using recursion 

#include<bits/stdc++.h>

void func(int c=5){
    
    if(c==0){
        return;
    }
    printf("Nikhil soni\n");
    func(c-1);
}
int main(){
    func();
    return 0;
}
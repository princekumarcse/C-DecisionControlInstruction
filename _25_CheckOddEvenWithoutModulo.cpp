// Write a program to check whether a given number is an even number or an odd number without using % operator. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number:";
    cin>>num;
    if(num&1){
        cout<<num<<" Is Odd";
    }else{
        cout<<num<<" Is Even";
    }
    return 0;
}
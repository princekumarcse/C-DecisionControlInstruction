//Write a program to check whether a given number is positive, negative or zero. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number :";
    cin>>num;
    if(num<0){
        cout<<num<<" Is Negative";
    }else if(num>0){
        cout<<num<<" Is Positive";
    }else{
        cout<<num<<" Is Zero";
    }
    return 0;
}
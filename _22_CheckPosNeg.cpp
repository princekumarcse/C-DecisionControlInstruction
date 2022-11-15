// 1. Write a program to check whether a given number is positive or non-positive. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number:"<<endl;
    cin>>num;
    if(num>=0){
        cout<<"Number is Positive";
    }else{
        cout<<"Number is Non-Positive";
    }
    return 0;
}

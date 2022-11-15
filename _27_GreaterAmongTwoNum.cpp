// Write a program to print greater between two numbers. Print one number of both are the same. 
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" Is Greater";
    }else if(num1==num2){
        cout<<num1<<" And "<<num2<<" Both Are Same";
    }else{
        cout<<num2<<" Is Greater";
    }
    return 0;
}
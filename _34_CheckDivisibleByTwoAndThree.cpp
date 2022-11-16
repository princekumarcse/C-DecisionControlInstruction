//Write a program to check whether a given number is divisible by 3 and divisible by 2. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number :";
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<num<<" Is is Divisible by 2 and 3";
    }else {
        cout<<num<<" Is not divisible by 2 and 3";
    }
    return 0;
}
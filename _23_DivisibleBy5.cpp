// 2. Write a program to check whether a given number is divisible by 5 or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number: ";
    cin>>num;
    if(num%5==0){
        cout<<num<<" Is Divisble By 5";
    }else{
        cout<<num<<" Is Not Divisble By 5";
    }
    return 0;
}
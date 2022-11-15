// 3. Write a program to check whether a given number is an even number or an odd number. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number:";
    cin>>num;
    if(num%2==0){
        cout<<num<<" Is Even";
    }else{
        cout<<num<<" Is Odd";
    }
    return 0;
}
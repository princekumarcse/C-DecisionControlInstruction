// 5. Write a program to check whether a given number is a three-digit number or not. 
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter A Number";
    cin>>num;
    while(num!=0){
        num=num/10;
        count++;
    }
    if(count==3){
        cout<<"Given Number has Three Digit";
    }else{
        cout<<"Given Number has Not Three Digit";
    }
    return 0;
}
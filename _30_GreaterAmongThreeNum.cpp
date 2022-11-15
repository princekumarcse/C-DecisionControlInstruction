//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times. 
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter Three Numbers :"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" Is Greater"<<endl;
    }else if(num2>num3){
        cout<<num2<<" Is Greater"<<endl;
    }else if(num1==num2 || num1==num3 ||num2==num3){
        cout<<num3<<" All are Equal"<<endl;
    }else{
        cout<<num3<<" Is Greater"<<endl;
    }
    return 0;
}
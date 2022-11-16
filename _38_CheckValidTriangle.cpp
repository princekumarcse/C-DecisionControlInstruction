//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 
#include<iostream>
using namespace std;
 int main(){
    int a,b,c;
    cout<<"Enter First Sides Of Triangle :"<<endl;
    cin>>a;
    cout<<"Enter Second Sides Of Triangle :"<<endl;
    cin>>b;
    cout<<"Enter Third Sides Of Triangle :"<<endl;
    cin>>c;
    if(a+b>c){
        cout<<"It is a Valid Triangle";
    }else  if(b+c>a){
        cout<<"It is a Valid Triangle";
    }else if(c+a>b){
        cout<<"It is a Valid Triangle";
    }else{
        cout<<"Not A Valid Triange";
    }
    return 0;
 }
// Write a program to check whether a given year is a leap year or not. 
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year%400==0){
        cout<<year<<" Is Leap Year";
    }else if(year%4==0){
        cout<<year<<" Is Leap Year";
    }else{
        cout<<year<<" Is Not a Leap Year";
    }
    return 0;
}
//. Write a program to check whether a given number is divisible by 7 or divisible by 3. 
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number :";
  cin>>num;
  if(num%7==0 || num%3==0){
    cout<<num<<" Is Divisible by 7 or 3";
  }else {
    cout<<num<<" Is Not divisible by 7 or 3";
  }
  return 0;
}
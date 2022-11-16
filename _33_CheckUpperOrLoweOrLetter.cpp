//Write a program to check whether a given alphabet is in uppercase or lowercase. 
#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter a Alphabet :";
    cin>>alpha;
    if(alpha>='a'&& alpha<='z'){
        cout<<alpha<<" Is LowerCase ";
    }else if(alpha>='A' && alpha<='Z'){
        cout<<alpha<<" Is Uppercase ";
    }else{
        cout<<"Out of Mind \2";
    }
    return 0;
}
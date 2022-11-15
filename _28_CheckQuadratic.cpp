// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots 
#include<iostream>
using namespace std;
int main(){
    int a,b,c,D;
    cout<<"Enter Co-efficient of a,b,c:";
    cin>>a>>b>>c;
    D=(b*b)-(4*a*c);
    if(D>0){
        cout<<"The Equation Roots are Real and District";
    }else if(D<0){
        cout<<"The Equation  Roots are Imaginary";
    }else{
        cout<<"The Equation  Real and Equal";
    }
    return 0;
}
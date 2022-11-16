//Write a program which takes the month number as an input and display number of days in that month 
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Months Number:";
    cin>>x;
    if(x==1){
        cout<<"31 Days, It is January";
    }else if(x==2){
        cout<<"28 |29 Days, It is February";
    }else if(x==3){
        cout<<"31 Days, It is March";
    }else if(x==4){
        cout<<"30 Days, It is April";
    }else if(x==5){
        cout<<"31 Days, It is May";
    }else if(x==6){
        cout<<"30 Days, It is June";
    }else if(x==7){
        cout<<"31 Days, It is July";
    }else if(x==8){
        cout<<"31 Days, It is August";
    }else if(x==9){
        cout<<"30 Days, It is Septerber";
    }else if(x==10){
        cout<<"31 Days, It is October";
    }else if(x==11){
        cout<<"30 Days, It is November";
    }else if(x==12){
        cout<<"31 Days, It is December";
    }else{
        cout<<"Enter Valid Month Number";
    }
    return 0;
}
/*Write a program to take marks of 5 subjects from the user.
Assume marks are given out of 100 and passing marks is 33.
Now display whether the candidate passed the examination or failed.*/
#include <iostream>
using namespace std;
int main()
{
    int phy, chem, math, eng, hin;
    cout << "Enter Physics Marks: " << endl;
    cin >> phy;
    cout << "Enter Chemistry Marks: " << endl;
    cin >> chem;
    cout << "Enter Mathematics Marks: " << endl;
    cin >> math;
    cout << "Enter English Marks: " << endl;
    cin >> eng;
    cout << "Enter Hindi Marks: " << endl;
    cin >> hin;
    if(phy<33){
        cout<<"You are Failled ";
    }else if(chem<33){
        cout<<"You are Failled ";
    }else if(math<33){
        cout<<"You are Failled ";
    }else if(eng<33){
        cout<<"You are Failled ";
    }else if(hin<33){
        cout<<"You are Failled ";
    }else {
        cout<<"\tCongratulations"<<endl;
        cout<<"You are passed in All subjects ";
    }
    return 0;
}
//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. 
#include<iostream>
using namespace std;
int main(){
    int CostPrice,SellingPrice;
    cout<<"Enter Cost Price Of The Product: "<<endl;
    cin>>CostPrice;
    cout<<"Enter Selling Price Of The Product: "<<endl;
     cin>>SellingPrice;
    if(SellingPrice>CostPrice){
        int Profit=SellingPrice-CostPrice;
        float ProfitPer=(Profit/CostPrice)*100;
        cout<<"Profit Percentage is "<<ProfitPer<<"%";
    }else{
        int Loss=-(CostPrice-SellingPrice);
        float LossPer=(Loss/SellingPrice)*100;
        cout<<"Loss Percentage is "<<LossPer<<"%";
    }
    return 0;
}
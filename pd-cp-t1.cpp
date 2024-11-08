                                        //PD-CP-T1
#include<iostream>
using namespace std;

int main()
{
    string name;
    int quantity,totalPrice;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    cout<<"Enter the fruit name: ";
    cin>>name;
    cout<<"Enter the quantity in kgs: ";
    cin>>quantity;
    for(int i=0;i<4;i++)
    {
        if(name==fruit[i])
        {
            totalPrice=quantity*price[i];
            break;
        }
    }
    cout<<"Total bill: Rs. "<<totalPrice;
    return 0;
}
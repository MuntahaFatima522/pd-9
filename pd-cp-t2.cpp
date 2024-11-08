                                        //PD-CP-T2
#include<iostream>
using namespace std;

int calculateTotal(string movies[],int size,string MovieName);

int main()
{
    string MovieName;
    string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    cout<<"Enter name of movie: ";
    cin>>MovieName;
    int totalPrice=calculateTotal(movies,5,MovieName);
    cout<<"Price after discount: Rs. "<<totalPrice;
    return 0;
}

int calculateTotal(string movies[],int size,string MovieName)
{
    int price=500;
    int discount,totalPrice;
    for(int i=0;i<5;i++)
    {
        if(MovieName==movies[i])
        {
            if(i%2!=0)
            {
                discount=0.05*price;
                totalPrice=price-discount;
            }
            else
            {
                discount=0.1*price;
                totalPrice=price-discount;
            }
        }
    }
    return totalPrice;
}
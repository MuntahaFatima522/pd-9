                                        //PD-CP-T4
#include<iostream>
using namespace std;

bool Check(int arr[],int size);

int main()
{
    int size;
    bool result;
    cout<<"Enter the number of elements you want to enter in array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size <<" numbers one per line: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    result=Check(arr,size);
    if(result==true)
    {
        cout<<"Boom!";
    }
    else
    {
        cout<<"There is no 7 in the array.";
    }
    return 0;
}

bool Check(int arr[],int size)
{
    bool result=false;
    int rem;
    int num;
    for(int j=0;j<size;j++)
    {
        num=arr[j];
        while(num!=0)
        {
            rem=num%10;
            num=arr[j]/10;
            if(rem==7)
            {
                break;
            }
        }
        if(rem==7)
        {
            result=true;
            break;
        }
    }
    return result;
}


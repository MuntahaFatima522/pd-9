                                        //PD-CP-T6
#include<iostream>
using namespace std;

int transform(int arr[],int n,int count);

int main()
{
    int n;
    int count;
    cout<<"Enter the number of elements you want to enter in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of times even-odd transformation needs to be done: ";
    cin>>count;
    int result=transform(arr,n,count);
    cout<<"Transformed string is: "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}

int transform(int arr[],int n,int count)
{
    for(int x=0;x<n;x++)
    {
        if(arr[x]%2!=0)
        {
            arr[x]=arr[x]+(count*2);
        }
        else
        {
            arr[x]=arr[x]-(count*2);
        }
    }
}
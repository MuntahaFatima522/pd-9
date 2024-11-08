                                        //PD-CP-T8
#include<iostream>
using namespace std;

int calculateTime(string arr[],int n);

int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter in the array: ";
    cin>>n;
    string arr[n];
    cout<<"Enter "<<n <<" colors one on a line: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int time=calculateTime(arr,n);
    cout<<"Total time: "<<time<<" sec";
    return 0;
}

int calculateTime(string arr[],int n)
{
    int colorTime=0;
    int switchTime=0;
    for(int j=0;j<n;j++)
    {
        colorTime=colorTime+2;
    }
    for(int k=0;k<n;k++)
    {
        if((k+1)==n)
        {
            break;
        }
        if(arr[k]!=arr[k+1])
        {
            switchTime=switchTime+1;
        }
    }
    int time=colorTime+switchTime;
    return time;
}
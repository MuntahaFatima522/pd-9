                                        //PD-CP-T3
#include<iostream>
using namespace std;

bool checkLength(string word);

int main()
{
    string word;
    bool result;
    cout<<"Enter string: ";
    cin>>word;
    result=checkLength(word);
    cout<<"Result: "<<result;
    return 0;
}

bool checkLength(string word)
{
    bool result=false;
    int count=0;
    for(int i=0;word[i]!='\0';i++)
    {
        count++;
    }
    if(count%2==0)
    {
        result=true;
    }
    return result;
}
                                        //PD-CP-T5
#include <iostream>
using namespace std;

bool CheckIdentical(string arr[], int num);

int main()
{
    string arr[4];
    cout << "Enter 4 strings one per line: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    bool result = CheckIdentical(arr, 4);
    cout << "Result:" << result;
    return 0;
}

bool CheckIdentical(string arr[], int num)
{
    bool result=true;
    for (int j = 0; j < num; j++)
    {
        if (arr[j] != arr[0])
        {
            result = false;
            break;
        }
    }
    return result;

}

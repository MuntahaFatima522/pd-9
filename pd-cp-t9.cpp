                                        //PD-CP-T9
#include <iostream>
using namespace std;

void code(string move[], string pin);

int main()
{
    string move[10] = {"Shimmy", "Shake", "Pirutte", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabsque"};
    string pin;
    cout << "Enter the pin : ";
    cin >> pin;
    code(move, pin);
}

void code(string move[], string pin)
{
    bool checker = true;
    if (pin.length() != 4)
    {
        cout << "invalid input" << endl;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (!(pin[i] >= '0' && pin[i] <= '9'))
            {
                checker = false;
                cout << "invalid input" << endl;
            }
        }

        if (checker)
        {
            for (int i = 0; i < 4; i++)
            {
                int c = pin[i] - '0';
                int idx = (c + i) % 10;
                cout << move[idx] << endl;
            }
        }
    }
}

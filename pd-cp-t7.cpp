                                        //PD-CP-T7
#include <iostream>
using namespace std;

int countCommon(string word1, string word2);

int main()
{
    string word1;
    string word2;
    cout << "Enter first string: ";
    cin >> word1;
    cout << "Enter second string: ";
    cin >> word2;
    int result = countCommon(word1, word2);
    cout << "Total common characters: " << result;
    return 0;
}

int countCommon(string word1, string word2)
{
    int count = 0;
    for (int i = 0; (word1[i] != '\0'); i++)
    {
        for (int j = 0; (word2[j] != '\0'); j++)
        {
            if (word1[i] == word2[j])
            {
                count++;
                word2[j]=238;
                break;
            }
        }
    }
    return count;
}

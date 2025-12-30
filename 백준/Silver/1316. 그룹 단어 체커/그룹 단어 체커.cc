#include <iostream>
#include <string>
using namespace std;

int main()
{

    std::string words = "";
    int prev = ' ';
    int target = 0;
    int count = 0;
    cin >> count;
    count = 0;
    while (cin >> words)
    {
        char alpha[27] = {};
        for (int i = 0; words.length() > i; i++)
        {
            target = 97;
            target = words[i] - target;
            if (alpha[target] == 0)
            {
                alpha[target] = 1;
            }
            else
            {
                if ((prev != target) && alpha[target] == 1)
                {
                    --count;
                    break;
                }
            }
            prev = target;
        }
        ++count;
    }

    cout << count << endl;
    return 0;
}

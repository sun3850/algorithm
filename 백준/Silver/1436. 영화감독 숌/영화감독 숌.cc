#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int count = 666;
    int movieCount = 0;
    int matchCount = 0;
    int sixCount = 0;

    cin >> matchCount;
    while (true)
    {
        int temp = count;
        sixCount = 0;
        while (temp > 0)
        {
            if (temp % 10 == 6)
            {
                ++sixCount;
            }
            else
            {
                if (sixCount < 3)
                {
                    sixCount = 0;
                }
            }
            temp /= 10;
        }
        if (sixCount >= 3)
        {
            ++movieCount;
            if (movieCount == matchCount)
            {
                break;
            }
        }
        ++count;
    }
    cout << count << endl;
}

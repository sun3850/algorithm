#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int number1 = 0;
    int number2 = 0;
    char borad[50][50] = {};
    int min_change = 64;
    int change_count1 = 0;
    int change_count2 = 0;

    cin >> number1 >> number2;

    // Input number1 x number2 chessboard
    for (int i = 0; i < number1; ++i)
    {
        for (int j = 0; j < number2; ++j)
        {
            cin >> borad[i][j];
        }
    }

    // Output the chessboard
    for (int i = 0; i <= number1 - 8; ++i)
        for (int j = 0; j <= number2 - 8; ++j)
        {
            char next_color1 = 'W';
            char next_color2 = 'B';
            change_count1 = 0;
            change_count2 = 0;
            for (int k = 0; k < 8; ++k)
            {
                next_color1 = (next_color1 == 'W') ? 'B' : 'W';
                next_color2 = (next_color2 == 'W') ? 'B' : 'W';
                for (int l = 0; l < 8; ++l)
                {

                    if (borad[i + k][j + l] != next_color1)
                        ++change_count1;

                    if (borad[i + k][j + l] != next_color2)
                        ++change_count2;

                    next_color1 = (next_color1 == 'W') ? 'B' : 'W';
                    next_color2 = (next_color2 == 'W') ? 'B' : 'W';
                }
            }
            if (min_change > change_count1)
                min_change = change_count1;

            if (min_change > change_count2)
                min_change = change_count2;
        }

    cout << min_change;
}
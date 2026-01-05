#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int count = 0;
    int paper[100][100] = {0};

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int i = x; i < x + 10; ++i)
        {
            for (int j = y; j < y + 10; ++j)
            {
                paper[i][j] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; ++j)
        {
            if (paper[i][j] == 1)
            {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}

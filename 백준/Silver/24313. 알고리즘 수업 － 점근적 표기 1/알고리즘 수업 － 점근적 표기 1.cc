#include <iostream>
using namespace std;

int main()
{
    int a1 = 0;
    int a0 = 0;
    int c = 0;
    int n0 = 0;
    bool result = true;
    cin >> a1 >> a0 >> c >> n0;

    for (int i = n0; i <= 100; ++i)
    {
        if (a1 * i + a0 <= c * i)
        {
            // no action
        }
        else
        {
            result = false;
            break;
        }
    }
    cout << result;
    return 0;
}

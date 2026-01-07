#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number = 0;
    int count = 0;
    set<int> numbers;

    cin >> count;

    while (cin >> number)
    {
        numbers.insert(number);
    }

    for (const auto &n : numbers)
    {
        cout << n << "\n";
    }
}

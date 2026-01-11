#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number = 0;
    int temp = 0;
    multiset<int> mySet;
    cin >> number;
    while (number > 0)
    {
        temp = number % 10;
        mySet.insert(temp);
        number = number / 10;
    }

    for (int i = mySet.size(); i > 0; i--)
    {
        auto it = mySet.end();
        --it;
        cout << *it;
        mySet.erase(it);
    }
}

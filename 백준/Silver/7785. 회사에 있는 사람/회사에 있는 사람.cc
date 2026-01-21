#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<string> peoples;
    int count;
    string name;
    string state;
    cin >> count;

    while (count--)
    {
        cin >> name >> state;
        if (state == "enter")
        {
            peoples.insert(name);
        }
        else if (state == "leave")
        {
            peoples.erase(name);
        }
    }

    for (auto it = peoples.rbegin(); it != peoples.rend(); ++it)
    {
        cout << *it << '\n';
    }
}

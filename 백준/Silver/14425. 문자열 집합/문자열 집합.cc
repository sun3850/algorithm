#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<string> S;
    int N_count;
    int count;
    string name;
    cin >> N_count >> count;
    while (N_count--)
    {
        cin >> name;
        S.insert(name);
    }

    count = 0;
    while (cin >> name)
    {
        if (S.find(name) != S.end())
        {
            ++count;
        }
    }
    cout << count;
}

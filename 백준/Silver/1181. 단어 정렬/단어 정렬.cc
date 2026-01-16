#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<set<string>> wards;
    string ward;
    int count;
    int size;
    cin >> count;
    while (count--)
    {
        cin >> ward;
        size = ward.size();
        while (wards.size() <= size)
        {
            wards.push_back(set<string>());
        }
        wards[size].insert(ward);
    }

    for (const auto &ward_set : wards)
    {
        for (const auto &name : ward_set)
        {
            cout << name << '\n';
        }
    }
}
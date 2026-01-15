#include <iostream>
#include <list>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<pair<int, int>> yx;
    set<int> xp;
    int x, y;
    int count;
    cin >> count;

    while (count--)
    {
        cin >> y >> x;
        yx.push_back({x, y});
    }
    yx.sort();
    int perv_y = yx.front().first;
    for (const auto &p : yx)
    {
        if (perv_y == p.first)
        {
            xp.insert(p.second);
        }
        else
        {
            for (const auto &x_val : xp)
                cout << x_val << " " << perv_y << "\n";
            xp.clear();
            xp.insert(p.second);
        }
        perv_y = p.first;
        if (yx.back() == p)
        {
            for (const auto &x_val : xp)
                cout << x_val << " " << perv_y << "\n";
        }
    }
}
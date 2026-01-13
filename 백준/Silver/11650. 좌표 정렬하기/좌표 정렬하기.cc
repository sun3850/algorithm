#include <iostream>
#include <list>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    list<pair<int, int>> xy;
    set<int> yp;
    int x, y;
    int count;
    cin >> count;

    while (count--)
    {
        cin >> x >> y;
        xy.push_back({x, y});
    }
    xy.sort();
    int perv_x = xy.front().first;
    for (const auto &p : xy)
    {
        if (perv_x == p.first)
        {
            yp.insert(p.second);
        }
        else
        {
            for (const auto &y_val : yp)
                cout << perv_x << " " << y_val << "\n";
            yp.clear();
            yp.insert(p.second);
        }
        perv_x = p.first;
        if (xy.back() == p)
        {
            for (const auto &y_val : yp)
                cout << perv_x << " " << y_val << "\n";
        }
    }
}
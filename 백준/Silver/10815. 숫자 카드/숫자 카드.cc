#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    unordered_set<int> cards;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        cards.insert(num);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;

        if (cards.count(num))
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }

    return 0;
}

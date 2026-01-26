#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    vector<int> sorted_unique = numbers;
    sort(sorted_unique.begin(), sorted_unique.end());
    sorted_unique.erase(unique(sorted_unique.begin(), sorted_unique.end()), sorted_unique.end());

    for (int i = 0; i < n; i++)
    {
        int compressed = lower_bound(sorted_unique.begin(), sorted_unique.end(), numbers[i]) - sorted_unique.begin();
        cout << compressed;
        if (i < n - 1)
            cout << " ";
    }

    return 0;
}

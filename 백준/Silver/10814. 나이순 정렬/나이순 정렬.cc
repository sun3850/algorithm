#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<string>> users(100000);
    string username;
    int count;
    int age;
    cin >> count;
    while (count--)
    {
        cin >> age >> username;
        users[age].push_back(username);
    }

    for (int age = 0; age < 100000; ++age)
    {
        const vector<string> &user_list = users[age];
        {
            for (int i = 0; i < user_list.size(); ++i)
            {
                cout << age << ' ' << user_list[i] << '\n';
            }
        }
    }
}
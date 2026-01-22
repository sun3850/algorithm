#include <iostream>
#include <map>

using namespace std;

bool isNumeric(const string &s)
{
    try
    {
        stoi(s); // 또는 stof, stod 등
        return true;
    }
    catch (...)
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, int> poketmon_number;
    map<int, string> number_poketmon;
    int insertCount, outputCount;
    int count = 0;
    string name;
    cin >> insertCount >> outputCount;

    while (insertCount--)
    {
        cin >> name;
        poketmon_number.insert({name, count});
        number_poketmon.insert({count, name});

        count++;
    }

    while (outputCount--)
    {
        cin >> name;
        if (isNumeric(name))
        {
            cout << number_poketmon[stoi(name) - 1] << '\n';
        }
        else
        {
            cout << poketmon_number[name] + 1 << '\n';
        }
    }
}

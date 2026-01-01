#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string word = "";
    int isWord = 0;
    int count = 0;
    cin >> word;
    vector<string> words = {"c=", "c-", "d-", "lj", "nj", "s=", "z=", "dz="};
    for (int i = 0; word.size() > i;)
    {
        if ((word.size() - i) >= 2)
        {
            string sub = word.substr(i, 2);
            for (int j = 0; words.size() > j; ++j)
            {
                if (sub == words[j])
                {
                    i += 1;
                    ++isWord;
                    count += 2;
                    continue;
                }
            }

            if ((word.size() - i) >= 3)
            {
                if (word.substr(i, 3) == "dz=")
                {
                    ++isWord;
                    count += 3;
                    i += 2;
                    continue;
                }
            }
        }
        ++i;
    }
    int result = word.size() - count;
    result += isWord;
    cout << result << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{

    std::string subject;
    double score = 0;
    std::string grade;
    double totalScore = 0;
    double average = 0;

    while (cin >> subject >> score >> grade)
    {
        if (grade == "P")
        {
            // Do nothing for Pass grades
        }
        else
        {
            totalScore += score;
            if (grade == "A+")
                average += 4.5 * score;
            else if (grade == "A0")
                average += 4.0 * score;
            else if (grade == "B+")
                average += 3.5 * score;
            else if (grade == "B0")
                average += 3.0 * score;
            else if (grade == "C+")
                average += 2.5 * score;
            else if (grade == "C0")
                average += 2.0 * score;
            else if (grade == "D+")
                average += 1.5 * score;
            else if (grade == "D0")
                average += 1.0 * score;
            else if (grade == "F")
                average += 0;
        }
    }

    average = average / totalScore;
    cout.precision(6);
    cout << fixed << average << endl;
    return 0;
}

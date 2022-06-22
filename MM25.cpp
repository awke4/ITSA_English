// What is the Probability?
#include <iostream>
#include <iomanip>
using namespace std;

/*等比數列題目*/
int main()
{
    int set;
    cin >> set;
    for (int i = 0; i < set; i++)
    {
        int peo, winner;
        float p, fail, first = 1, ratio = 1, answer;
        cin >> peo >> p >> winner;
        fail = 1 - p;
        /*計算首項*/
        for (int i = 1; i < winner; i++)
            first *= fail;
        first *= p;

        /*計算公比*/
        for (int i = 0; i < peo; i++)
            ratio *= fail;

        /*代公式*/
        answer = first / (1 - ratio);
        cout << fixed << setprecision(4) << answer << "\n";
    }

    return 0;
}
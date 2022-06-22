//依照測驗的答案排序分數輸出
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<int, int> score;

int max(int, int, int);

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            string answer;
            cin >> answer;
            {
                if (answer == "correct") //若是correct,成績+10分
                    score[j] += 10;
                else if (answer == "wrong") //若是wrong,成績-10分
                    score[j] -= 10;
            }
        }
    }

    int maximum, time = 0;

    while (time < 3)
    {
        maximum = max(score[1], score[2], score[3]);
        for (int i = 1; i <= 3; i++)
        {
            if (score[i] == maximum)
            {
                score[i] = -1000000;
                cout << '(' << i << ',' << maximum << ')';
                time++;
            }
        }
        cout << "\n";
    }
    return 0;
}

/*比較大小函式*/
int max(int x, int y, int z)
{
    if (x >= y && x >= z)
        return x;
    else if (y >= x && y >= z)
        return y;
    else
        return z;
}
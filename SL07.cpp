//依照題目規則計算單字的數值
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while (s != "end")
    {
        int answer;
        answer = s.size() * 2;
        for (auto i = s.begin(); i != s.end(); i++)
        {
            if (*i == 'a' || *i == 'e' || *i == 'i' || *i == 'o' || *i == 'u') //為母音
                answer += 3;
            else if (*i == 'A' || *i == 'E' || *i == 'I' || *i == 'O' || *i == 'U') //為子音
                answer += 4;
            else if (*i >= 65 && *i <= 90) //為大寫
                answer++;
        }
        cout << answer<< "\n";
        cin >> s;
    }

    return 0;
}
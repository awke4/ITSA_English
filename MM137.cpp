// 2的n次方
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int exp, answer = 2;
        cin >> exp;
        if (exp == 0) // 0次方
            cout << "1\n";
        else if (exp == 1) // 1次方
            cout << "2\n";
        else
        {
            for (int i = 2; i <= exp; i++)
                answer *= 2;
            cout << answer << "\n";
        }
    }

    return 0;
}
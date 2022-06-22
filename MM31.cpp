//輸出n階乘
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int factorial;
        cin >> factorial;
        int answer = 1;
        for (int i = 2; i <= factorial; i++) //計算階乘
            answer *= i;
        cout << answer << "\n";
    }

    return 0;
}
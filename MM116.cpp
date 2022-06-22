//判斷是否為11的整數
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int odd = 0, even = 0;
        string data;
        cin >> data;
        for (int i = 0; i < data.size(); i++)
        {
            if (!(i % 2)) // 0表示為偶數位,非0表示奇數位
                even += (data[i]-48);
            else
                odd += (data[i]-48);
        }

        if (odd >= even)
        {
            if (!((odd - even) % 11))
                cout << "true\n";
            else
                cout << "false\n";
        }
        else if (odd < even)
        {
            if (!((even - odd) % 11))
                cout << "true\n";
            else
                cout << "false\n";
        }
    }
    return 0;
}
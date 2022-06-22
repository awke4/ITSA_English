//檢查是否回文
#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> str;

int main()
{
    string input;
    cin >> input;
    for (auto i = input.begin(); i != input.end(); i++) //將字元依序push進stack中
        str.push(*i);

    for (auto i = input.begin(); i != input.end(); i++)
    {
        if (*i != str.top())
        {
            cout << "no"
                 << "\n";
            return 0;
        }
        if (!str.empty())
            str.pop();
    }
    cout << "yes"
         << "\n";
    return 0;
}
// Codec加密
#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    for (auto i = input.begin(); i != input.end(); i++)
    {
        *i -= 3; // ASCII碼減三
    }
    cout << input << "\n";
    return 0;
}
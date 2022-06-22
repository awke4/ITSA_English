// Counting Numbers
#include <iostream>
#include <map>
using namespace std;

map<int, int> list; // int arr[55][2], s = 0;
int num;
int main()
{
    cin >> num;
    while (num != -999)
    {
        list[num]++;
        cin >> num;
    }

    for (auto i = list.end(); i != list.begin(); i--)
    {
        if (i != list.end())
            cout << i->first << ' ' << i->second << "\n";
    }
    cout << list.begin()->first << ' ' << list.begin()->second << "\n";
    return 0;
}
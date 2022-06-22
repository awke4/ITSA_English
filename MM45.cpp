//給定三邊求三角形的種類
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    vector<int> len;
    len.resize(3);
    cin >> len[0] >> len[1] >> len[2];
    sort(len.begin(), len.end());
    if (len[2] >= (len[0] + len[1])) //不為三角形
        cout << "invalid\n";
    else if (len[2] * len[2] == ((len[0] * len[0]) + (len[1] * len[1]))) //直角
        cout << "right\n";
    else if (len[2] * len[2] > ((len[0] * len[0]) + (len[1] * len[1]))) //鈍角
        cout << "obtuse\n";
    else if (len[2] * len[2] < ((len[0] * len[0]) + (len[1] * len[1]))) //銳角
        cout << "acute\n";
    return 0;
}
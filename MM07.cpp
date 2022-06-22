// The Numbers
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string n, m; // n為比較用數字,m為被比較數字
    int loc1 = 0, loc2 = 0, answer=0;
    cin >> n >> m;
    for (int i = 0; i < m.size(); i)
    {
        if (loc1 == n.size()) // str1完整出現在str2中
        {
            answer++;
            loc1 = 0;
            i++;
            loc2 = i;
        }
        else if (n[loc1] == m[loc2])
        {
            loc1++;
            loc2++;
        }
        else if (n[loc1] != m[loc2])
        {
            loc1 = 0;
            i++;
            loc2 = i;
        }
    }
    cout << answer << "\n";
    return 0;
}
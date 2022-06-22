// Hashmat the brave warrior
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char ch;
    while ((cin >> x) && x!=EOF)
    {
        cin >> y;
        cout << abs(x - y) << "\n";
    }
    return 0;
}
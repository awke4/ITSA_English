// Factorization因式分解
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int input; //因式分解對象
        cin >> input;
        int on = 0;
        for (int j = 2; j <= input; j++)
        {
            if (!(input % j))
            {
                if (on)
                    cout << '*';
                on = 1;
                cout << j;
                int index = 0; //可被j整除幾次(指數)
                while (!(input % j))
                {
                    index++;
                    input /= j;
                    if (input % j && index != 1)
                        cout << '^'<< index;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
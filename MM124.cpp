//判斷是否為質數
#include <iostream>
#include <string>
using namespace std;

int prime(int);

int main()
{
    string num;
    cin >> num;
    while (num[0] != '#')
    {
        int Decimal = 0;
        int k = 1; //當前位數的值, 3^i
        for (auto i = num.begin()+1; i != num.end(); i++)
            k *= 3;
        for (auto i = num.begin(); i != num.end(); i++)
        {
            int n = *i - 48;
            if (n != 0)
                Decimal += (n)*k;
            k /= 3;
        }
        int answer = prime(Decimal);
        cout << answer << "\n";
        num.erase();
        cin >> num;
    }

    return 0;
}

/*判斷是否質數，是則回傳-1,反之則回傳0*/
int prime(int x)
{
    if (x == 1)
        return 0;
    for (int i = 2; i < x; i++)
    {
        if (!(x % i))
            return 0;
    }
    return -1;
}
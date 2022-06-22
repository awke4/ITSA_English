//判斷有n個數的數列中，1到n-1有沒有不在數列裡的
#include <iostream>
#include<map>
using namespace std;

map<int, int>list;

int main()
{
    int number;
    cin >> number;
    for (int i = 1; i < number; i++)
    {
        int input;
        cin >> input;
        list[input] = 1; //紀錄input這個數字出現
    }

    for (int i = 1; i <= number; i++)
    {
        if (!list[i])
        {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}
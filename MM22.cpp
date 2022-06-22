// Jolly Jumpers
#include <iostream>
using namespace std;

int num, arr[3010], answer[3010];

int main()
{

    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> arr[i];

    for (int i = 1; i < num; i++)
    {

        if (abs(arr[i] - arr[i - 1]) >= num || arr[i] == arr[i - 1]) //連續元素之間差值的絕對值大於 n
        {
            cout << "Not jolly\n";
            return 0;
        }

        else if (!answer[abs(arr[i] - arr[i - 1])]) //若該元素之間的差值尚未紀錄
            answer[abs(arr[i] - arr[i - 1])] = 1;

        else
        {
            cout << "Not jolly\n";
            return 0;
        }
    }
    cout << "Jolly\n";//連續元素之間差值的絕對值為 1 到 n-1 的所有值
    return 0;
}
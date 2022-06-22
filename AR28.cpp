//數列中,i < j 使得 ai > 2aj
#include <iostream>
using namespace std;

int input[5010];
int twoInput[5010]; //該數列儲存input數列裡的兩倍數

int main()
{
    int num, answer = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> input[i];
        twoInput[i] = 2 * input[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (input[i] > twoInput[j])
                answer++;
        }
    }
    cout << answer<<"\n";

    return 0;
}
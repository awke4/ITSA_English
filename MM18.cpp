//求對所有點距離和最小的點
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int max[110] = {0};
    int num, x[110], y[110];
    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> x[i] >> y[i];
    /*求點對所有點距離的和*/
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            int dis = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            if (max[i] < dis)
                max[i] = dis;
        }
    }
    /*找出最小距離和的點*/
    int min = INT_MAX, minx, miny;
    for (int i = 0; i < num; i++)
    {
        if (max[i] < min)
        {
            min = max[i];
            minx = x[i];
            miny = y[i];
        }
        else if (max[i] == min)
        {
            if (x[i] < minx)
            {
                minx = x[i];
                miny = y[i];
            }
            else if (y[i] < miny && x[i] == minx) //若x座標相同
                miny = y[i];
        }
    }
    cout << minx << " " << miny << "\n";
    return 0;
}
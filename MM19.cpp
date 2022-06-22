// Surface to Volume Ratio 表面積/體積比
#include <iostream>
using namespace std;

void Euclidean(int*, int, int);

int main()
{
    int num, h, w, d, hcf, j = 2, mins, minv;
    double SUR, VOL, sur, vol, R, r;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> h >> w >> d;
        sur = (h * d * 2) + (h * w * 2) + (w * d * 2);
        vol = h * w * d;
        if (!i)
        {
            SUR = sur;
            VOL = vol;
        }
        else
        {
            R = SUR / VOL;
            r = sur / vol;
            if (R >= r)
            {
                SUR = sur;
                VOL = vol;
            }
        }
    }
    mins = SUR;
    minv = VOL;
    Euclidean(&hcf, mins, minv);
    cout << mins / hcf << '/' << minv / hcf<< "\n";
    return 0;
}

/*利用輾轉相除法求最大公因數*/
void Euclidean(int*hcf, int x, int y)
{
    if (!y)
        *hcf = x;
    else
        Euclidean(hcf, y, x % y);
}
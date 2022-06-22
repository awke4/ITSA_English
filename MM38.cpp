// Rational Number Addition計算分數
#include <iostream>
using namespace std;

void Euclidean(int *, int, int);

int main()
{
    int numer1, deno1, numer2, deno2; // numer為分子, deno為分母
    char ch;
    cin >> numer1 >> ch >> deno1 >> numer2 >> ch >> deno2;
    while (numer1 || deno1 || numer2 || deno2)
    {
        int numer, deno, hcf;                        // hcf為最大公因數
        numer = (numer1 * deno2) + (numer2 * deno1); //求分子
        deno = deno1 * deno2;                        //求分母
        Euclidean(&hcf, numer, deno);                //是否可化減的依據

        if (hcf == 1) //互質
            cout << numer <<'/'<< deno << "\n";
        else //可化減
            cout << numer / hcf <<'/'<< deno / hcf << "\n";

        cin >> numer1 >> ch >> deno1 >> numer2 >> ch >> deno2;
    }
    return 0;
}

/*利用輾轉相除法求最大公因數*/
void Euclidean(int *hcf, int x, int y)
{
    if (!y)
        *hcf = x;
    else
        Euclidean(hcf, y, x % y);
}
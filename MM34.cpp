//求最大公因數
#include <iostream>
#include<vector>
using namespace std;

void Euclidean(int*, int, int);

int main()
{
    int data_num;
    cin >> data_num;
    for (int i = 0; i < data_num; i++)
    {
        int num, max = 0, min = 0;
        vector<int>arr;
        arr.resize(data_num);
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            cin >> arr[i];
            if (!j)
            {
                max = arr[i]; //將arr[0]作為基準
                min = arr[i];
            }
            else
            {
                if (arr[i] > max)
                    max = arr[i];
                else if (arr[i] < min)
                    min = arr[i];
            }
        }
        int hcf;
        Euclidean(&hcf, max, min);
        cout << hcf << "\n";
    }

    return 0;
}

/*輾轉相除*/
void Euclidean(int* hcf, int x, int y)
{
    if (!y)
        *hcf = x;
    else
        Euclidean(hcf, y, x % y);
}
// Vito's family找中位數
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int k;
        vector<int> arr;
        cin >> k;
        arr.resize(k);
        for (int j = 0; j < k; j++)
            cin >> arr[j];
        sort(arr.begin(), arr.end());
        
        int median; //中位數
        if (k % 2)
            median = arr[(k / 2)]; //陣列由0開始，arr的項數減一
        else
            median = (arr[k / 2] + arr[(k / 2) - 1]) / 2; ////陣列由0開始，arr的項數減一
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += abs(median - arr[i]);
        cout << sum << "\n";
    }

    return 0;
}
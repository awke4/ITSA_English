#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int testNum;
    cin >> testNum;
    for (int i = 0; i < testNum; i++)
    {
        vector<int> arr;
        int arrSize;
        cin >> arrSize;
        arr.resize(arrSize * 2);
        for (int i = 0; i < (arrSize * 2); i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << arr[arrSize-1] << "\n";
    }
    return 0;
}
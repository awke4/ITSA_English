#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int data_num;
    cin >> data_num;
    for (int i = 0; i < data_num; i++)
    {
        int num;
        int carry; //轉換至多少進位
        vector<int> answer;
        answer.resize(100);
        int size=0;
        cin >> num >> carry;
        while(num>=carry)
        {
            answer[size++]=num%carry;
            num/=carry;
        }
        answer[size++]=num;
        for(int i =size-1; i>=0; i--)
        {
            if(answer[i]<10)
                cout << answer[i];
            else
            {
                switch (answer[i])
                {
                case 10:
                    cout << 'A';
                    break;
                case 11:
                    cout << 'B';
                    break;
                case 12:
                    cout << 'C';
                    break;
                case 13:
                    cout << 'D';
                    break;
                case 14:
                    cout << 'E';
                    break;
                case 15:
                    cout << 'F';
                    break;
                default:
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
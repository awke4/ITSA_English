// Prime Numbers
#include <iostream>
#include<vector>
#define MAX_NUMBER 300000
using namespace std;

vector<bool>prime;

void prime_list();

int main()
{
    prime.resize(MAX_NUMBER);
    int data, answer = 0;
    prime_list();
    cin >> data;
    while (data)
    {
        for (int i = 0; i < data; i++)
        {
            if (!prime[i])
                answer++;
        }
        cout << answer<<"\n";
        answer = 0;
        cin >> data;
    }
    return 0;
}

/*建立質數表,1為非質數; 0為質數*/
void prime_list()
{
    prime[0] = 1; // 0,1不為質數
    prime[1] = 1;

    for (int i = 2; i < 30000; i++)
    {
        if (!prime[i])
        {
            // 刪掉質數i的倍數，從i倍開始
            for (int j = i * i; j < 30000; j += i)
                prime[j] = 1;
        }
    }
}
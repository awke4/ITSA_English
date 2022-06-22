// Linear interpolation
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num, answer;
    cin >> num;

    if(num > 8600)
        answer=15.5;
    else if(num<=0)
        answer = 0;
    else if (num <= 8600 && num > 6600) // 6600 < num <= 8600
        answer = 0.0027 * (num - 6600) + 10.1;

    else if (num <= 6600 && num > 6000)// 6000 < num <= 6600
        answer = 0.0015 * (num - 6000) + 9.2;

    else if (num <= 6000 && num > 5000)// 5000 < num <= 6000
        answer = 0.0008 * (num - 5000) + 8.4;

    else if (num <= 5000 && num > 4500)// 4500 < num <= 5000
        answer = (-0.0232) * (num - 4500) + 20.0;

    else if (num <= 4500 && num > 4000)// 4000 < num <= 4500
        answer = 0.024 * (num - 4000) + 8.0;

    else if (num <= 4000 && num > 3500)// 3500 < num <= 4000
        answer = 0.001 * (num - 3500) + 7.5;

    else if (num <= 3500 && num > 3000)// 3000 < num <= 3500
        answer = 0.0006 * (num - 3000) + 7.2;

    else if (num <= 3000 && num > 2000) // 2000 < num <= 3000
        answer = 0.0003 * (num - 2000) + 6.9;

    else if (num <= 2000 && num > 1000) // 1000 < num <= 2000
        answer = 0.0004 * (num - 1000) + 6.5;

    else if (num <= 1000 && num > 800)// 800 < num <= 1000
        answer = (-0.004) * (num - 800) + 7.3;

    else if (num <= 800 && num > 0)// 0 < num <= 800
        answer = (0.009125) * (num); 
    cout <<fixed<< setprecision(4) << answer<<"\n";//四捨五入到小數點後4位
    return 0;
}
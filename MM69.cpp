//計算BMI, 並求其值位於哪個區間
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float h, w, BMI;
    cin >> h >> w;
    BMI = w / ((h / 100) * (h / 100));
    BMI = (int)((BMI * 10) + 0.5) / 10.0; //四捨五入到小數點後一位
    cout << fixed << setprecision(1) << BMI << ' ';

    if (BMI < 18.5)
        cout << "underweight\n";
    else if (18.5 <= BMI && BMI < 24)
        cout << "normal\n";
    else if (24 <= BMI && BMI < 27)
        cout << "overweight\n";
    else if (27 <= BMI && BMI < 30)
        cout << "mild obesity\n";
    else if (30 <= BMI && BMI < 35)
        cout << "moderate obesity\n";
    else if (35 <= BMI)
        cout << "severe obesity\n";

    return 0;
}
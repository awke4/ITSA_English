//轉換氣溫
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float c, f, k; // c為攝氏, f為華式, k為絕對溫度
    cin >> c;
    f = (9 * c) / 5 + 32;
    k = c + 273.15;
    cout << "Fahrenheit = " << fixed << setprecision(2) << f<<"\n";
    cout<<"Absolute temperature = "<< fixed << setprecision(2) << k<<"\n";
    return 0;
}